#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3882164758U;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)41233;
signed char var_7 = (signed char)109;
unsigned int var_8 = 1980017302U;
unsigned char var_9 = (unsigned char)225;
signed char var_10 = (signed char)-41;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 6562574257763407164ULL;
unsigned long long int var_14 = 2670351588334959882ULL;
int zero = 0;
int var_15 = -546294998;
int var_16 = -167602068;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
