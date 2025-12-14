#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)92;
long long int var_2 = 8535046728851299509LL;
short var_4 = (short)-24467;
short var_5 = (short)31695;
signed char var_6 = (signed char)-49;
long long int var_7 = -8211259892784501844LL;
unsigned short var_8 = (unsigned short)28948;
long long int var_10 = 7111661715785116612LL;
int zero = 0;
unsigned int var_11 = 1768276347U;
unsigned long long int var_12 = 6735031312189407323ULL;
int var_13 = 1475667746;
unsigned short var_14 = (unsigned short)25029;
signed char var_15 = (signed char)-111;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
