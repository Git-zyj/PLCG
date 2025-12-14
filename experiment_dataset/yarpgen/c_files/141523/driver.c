#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3181047212974047293LL;
unsigned char var_3 = (unsigned char)163;
long long int var_4 = 5120495921080118018LL;
long long int var_5 = 4557388753962700853LL;
unsigned int var_6 = 4238904275U;
long long int var_7 = -6220609851036864687LL;
signed char var_8 = (signed char)95;
unsigned long long int var_11 = 391891490771263904ULL;
unsigned int var_12 = 3470498717U;
unsigned char var_13 = (unsigned char)117;
signed char var_14 = (signed char)-104;
int zero = 0;
signed char var_15 = (signed char)-122;
unsigned char var_16 = (unsigned char)64;
unsigned long long int var_17 = 1782588663724412062ULL;
long long int var_18 = -617469752075176129LL;
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
