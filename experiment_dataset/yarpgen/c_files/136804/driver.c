#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)215;
unsigned int var_4 = 2349394712U;
short var_6 = (short)4434;
unsigned long long int var_9 = 4888274717097904490ULL;
int var_18 = -245980209;
int zero = 0;
short var_19 = (short)-26474;
int var_20 = 952715638;
short var_21 = (short)-288;
signed char var_22 = (signed char)38;
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
