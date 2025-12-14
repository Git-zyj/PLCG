#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1855447231U;
int var_3 = -384376923;
unsigned long long int var_5 = 11318581768639210522ULL;
short var_7 = (short)-27804;
short var_9 = (short)-18278;
unsigned short var_10 = (unsigned short)48592;
unsigned long long int var_12 = 13962022137000582789ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 15211229857135876995ULL;
unsigned char var_17 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
