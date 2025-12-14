#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30330;
long long int var_5 = -1477297913269529772LL;
unsigned long long int var_7 = 15493719193449470666ULL;
unsigned short var_9 = (unsigned short)42955;
unsigned short var_16 = (unsigned short)63725;
int zero = 0;
signed char var_17 = (signed char)-73;
unsigned char var_18 = (unsigned char)199;
unsigned long long int var_19 = 14400157935347310433ULL;
void init() {
}

void checksum() {
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
