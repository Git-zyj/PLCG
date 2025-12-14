#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3398944839U;
unsigned long long int var_2 = 9270975154828207036ULL;
long long int var_5 = 4873721314591461366LL;
long long int var_6 = 3461427028528765300LL;
unsigned short var_7 = (unsigned short)59624;
signed char var_8 = (signed char)97;
signed char var_9 = (signed char)108;
long long int var_10 = -8229828006947017492LL;
unsigned int var_12 = 1564681315U;
unsigned char var_13 = (unsigned char)107;
int zero = 0;
unsigned char var_15 = (unsigned char)232;
unsigned int var_16 = 902708038U;
long long int var_17 = -7665267716648261630LL;
unsigned long long int var_18 = 1830055334416808218ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
