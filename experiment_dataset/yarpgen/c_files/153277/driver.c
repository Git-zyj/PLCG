#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3488031166U;
unsigned long long int var_1 = 8275744177963127754ULL;
unsigned char var_2 = (unsigned char)202;
long long int var_5 = 1819992315351397871LL;
signed char var_6 = (signed char)-74;
long long int var_7 = 4205182394381002041LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -6985907927391945624LL;
unsigned long long int var_11 = 14531751053611297700ULL;
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
