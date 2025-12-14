#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)253;
unsigned long long int var_6 = 16349096933827042434ULL;
unsigned long long int var_7 = 8580435871029448784ULL;
int var_8 = -398394890;
int zero = 0;
unsigned long long int var_10 = 13379699173571488613ULL;
signed char var_11 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
