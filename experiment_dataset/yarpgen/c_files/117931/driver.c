#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10875;
signed char var_3 = (signed char)-15;
_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)-42;
int zero = 0;
long long int var_11 = 8577839971083192192LL;
unsigned char var_12 = (unsigned char)47;
int var_13 = 1289071647;
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
