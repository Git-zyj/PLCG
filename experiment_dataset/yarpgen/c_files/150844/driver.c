#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5036747951396177870ULL;
unsigned long long int var_1 = 13626923504234454150ULL;
long long int var_2 = -5614805875808592501LL;
unsigned char var_3 = (unsigned char)174;
long long int var_6 = -2095245639104921870LL;
unsigned short var_9 = (unsigned short)52398;
unsigned long long int var_10 = 6838949609297413411ULL;
int zero = 0;
int var_15 = -2001715008;
int var_16 = -2110492229;
unsigned char var_17 = (unsigned char)178;
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
