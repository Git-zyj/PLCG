#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12355550218493122339ULL;
short var_2 = (short)28847;
short var_3 = (short)-12934;
signed char var_5 = (signed char)49;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)151;
int zero = 0;
signed char var_11 = (signed char)94;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)64304;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
