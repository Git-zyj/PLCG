#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)23;
short var_2 = (short)15146;
unsigned int var_5 = 2456381316U;
unsigned int var_6 = 1574118548U;
unsigned char var_7 = (unsigned char)165;
short var_8 = (short)-19116;
unsigned long long int var_9 = 15228520706902657912ULL;
int zero = 0;
int var_10 = -443402674;
int var_11 = 26832134;
signed char var_12 = (signed char)95;
long long int var_13 = 5386775448795548129LL;
unsigned int var_14 = 4036479450U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
