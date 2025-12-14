#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
unsigned long long int var_1 = 2158161653785892377ULL;
unsigned long long int var_2 = 7277221838227273452ULL;
signed char var_3 = (signed char)30;
unsigned int var_4 = 3685406203U;
unsigned int var_5 = 2323999746U;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)70;
unsigned long long int var_9 = 1209748601806183882ULL;
long long int var_10 = 2882293496596452021LL;
short var_11 = (short)-29670;
unsigned short var_13 = (unsigned short)61912;
int zero = 0;
unsigned char var_14 = (unsigned char)60;
int var_15 = 1317608762;
long long int var_16 = 787933157149068135LL;
long long int var_17 = -8611869722599405259LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
