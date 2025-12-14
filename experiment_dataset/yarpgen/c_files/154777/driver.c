#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17325;
short var_9 = (short)-26216;
short var_13 = (short)-15214;
int var_15 = 991368468;
int var_18 = 981422834;
int zero = 0;
short var_19 = (short)-14329;
unsigned int var_20 = 3535873670U;
unsigned char var_21 = (unsigned char)124;
long long int var_22 = 4875147810824384448LL;
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
