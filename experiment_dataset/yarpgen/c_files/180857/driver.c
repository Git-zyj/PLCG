#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -638813222;
unsigned char var_1 = (unsigned char)12;
unsigned int var_3 = 4213928190U;
int var_8 = 1090380666;
short var_9 = (short)18820;
int var_10 = -257803115;
int zero = 0;
unsigned char var_11 = (unsigned char)156;
unsigned char var_12 = (unsigned char)179;
short var_13 = (short)18677;
short var_14 = (short)30140;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
