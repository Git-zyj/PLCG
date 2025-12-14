#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15470381151457049728ULL;
unsigned long long int var_1 = 10515531565127806830ULL;
unsigned long long int var_3 = 9867339810029411746ULL;
unsigned short var_5 = (unsigned short)1636;
unsigned long long int var_8 = 11665845606153402848ULL;
unsigned long long int var_9 = 224277194735892660ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)43512;
unsigned long long int var_15 = 14689220044150672656ULL;
unsigned short var_16 = (unsigned short)58034;
unsigned short var_17 = (unsigned short)8813;
unsigned short var_18 = (unsigned short)16661;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
