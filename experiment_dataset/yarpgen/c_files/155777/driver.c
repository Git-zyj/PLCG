#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2888045198U;
int var_2 = 367600473;
short var_3 = (short)16040;
short var_4 = (short)14488;
short var_6 = (short)6670;
int zero = 0;
int var_11 = 1401639174;
short var_12 = (short)-26067;
unsigned short var_13 = (unsigned short)33413;
unsigned short var_14 = (unsigned short)19735;
unsigned long long int var_15 = 6651099013575332989ULL;
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
