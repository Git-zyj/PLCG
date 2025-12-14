#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14372863549191578674ULL;
unsigned short var_10 = (unsigned short)24019;
long long int var_11 = -7869701881638103671LL;
unsigned int var_18 = 962807078U;
int zero = 0;
int var_19 = -873136659;
signed char var_20 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
