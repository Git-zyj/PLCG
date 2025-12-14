#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5770620541184497119LL;
int var_3 = -654671145;
unsigned char var_4 = (unsigned char)227;
int var_5 = 1202449206;
int var_7 = -263621427;
short var_8 = (short)-17587;
unsigned long long int var_9 = 5490108220941605280ULL;
int zero = 0;
long long int var_11 = -946836734813331876LL;
short var_12 = (short)5627;
short var_13 = (short)3581;
short var_14 = (short)18107;
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
