#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8751851881408493044ULL;
short var_5 = (short)-25222;
unsigned int var_10 = 88090946U;
unsigned long long int var_12 = 12765681078382460205ULL;
short var_15 = (short)23529;
int zero = 0;
unsigned int var_16 = 361800645U;
unsigned long long int var_17 = 10956258428826231376ULL;
unsigned short var_18 = (unsigned short)29841;
void init() {
}

void checksum() {
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
