#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14056517262398585085ULL;
unsigned short var_3 = (unsigned short)49032;
long long int var_4 = 4775301118319384382LL;
unsigned long long int var_6 = 2800169621513277395ULL;
signed char var_7 = (signed char)36;
unsigned int var_8 = 1176304609U;
signed char var_9 = (signed char)119;
signed char var_11 = (signed char)78;
unsigned long long int var_13 = 4996169581009505205ULL;
int zero = 0;
signed char var_16 = (signed char)90;
unsigned long long int var_17 = 17992051366573086424ULL;
long long int var_18 = -4007081093868405783LL;
unsigned long long int var_19 = 12186729103646010113ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
