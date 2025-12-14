#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9175;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)28023;
int zero = 0;
signed char var_19 = (signed char)-79;
unsigned long long int var_20 = 16973710674484101137ULL;
signed char var_21 = (signed char)64;
unsigned char var_22 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
