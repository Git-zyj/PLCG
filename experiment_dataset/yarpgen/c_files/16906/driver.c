#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3588599438U;
unsigned int var_5 = 2480836205U;
unsigned long long int var_6 = 7793127959396839684ULL;
unsigned int var_8 = 1512019008U;
unsigned long long int var_13 = 17732911970169854683ULL;
short var_14 = (short)27536;
int zero = 0;
unsigned long long int var_16 = 13853531172616863002ULL;
unsigned char var_17 = (unsigned char)132;
long long int var_18 = 1722878079237415780LL;
int var_19 = 1606115587;
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
