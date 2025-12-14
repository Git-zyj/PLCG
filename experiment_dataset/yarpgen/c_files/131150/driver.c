#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13499778452818940375ULL;
int var_10 = -288846013;
_Bool var_11 = (_Bool)1;
int var_13 = 460975892;
int zero = 0;
unsigned int var_17 = 3850949323U;
unsigned char var_18 = (unsigned char)164;
short var_19 = (short)-23720;
long long int var_20 = -7272188238894251370LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
