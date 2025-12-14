#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 856409477;
unsigned short var_3 = (unsigned short)12382;
unsigned char var_5 = (unsigned char)204;
unsigned int var_8 = 2056680544U;
unsigned int var_11 = 2445002236U;
signed char var_14 = (signed char)89;
unsigned long long int var_15 = 14037270990025167219ULL;
unsigned char var_16 = (unsigned char)212;
unsigned short var_17 = (unsigned short)58053;
long long int var_19 = -9000263983445071170LL;
int zero = 0;
unsigned short var_20 = (unsigned short)12821;
unsigned int var_21 = 3485260255U;
long long int var_22 = -2314201388693206934LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
