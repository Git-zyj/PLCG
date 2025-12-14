#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -151903586;
unsigned long long int var_6 = 14424571269424167414ULL;
int var_8 = -242239515;
unsigned long long int var_11 = 13515806493877871586ULL;
int var_13 = 995771952;
int zero = 0;
unsigned short var_20 = (unsigned short)22917;
unsigned short var_21 = (unsigned short)32763;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
