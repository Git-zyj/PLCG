#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)43;
long long int var_1 = -8969904752798342424LL;
long long int var_3 = 9116027005277372017LL;
unsigned int var_5 = 2327113308U;
unsigned int var_7 = 3509142085U;
long long int var_9 = 7105907399154161418LL;
unsigned char var_11 = (unsigned char)9;
int zero = 0;
unsigned int var_14 = 889832209U;
unsigned char var_15 = (unsigned char)205;
unsigned char var_16 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
