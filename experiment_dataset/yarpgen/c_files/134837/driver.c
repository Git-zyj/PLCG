#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-68;
long long int var_6 = 6319981638426061230LL;
unsigned int var_10 = 1156925513U;
unsigned int var_13 = 3459326461U;
unsigned int var_14 = 3624717352U;
int zero = 0;
int var_18 = -986622800;
short var_19 = (short)9904;
short var_20 = (short)9273;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
