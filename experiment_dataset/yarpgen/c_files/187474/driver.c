#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)27508;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 15402751101383870041ULL;
signed char var_11 = (signed char)55;
unsigned char var_17 = (unsigned char)146;
int zero = 0;
unsigned long long int var_19 = 7047858939073642486ULL;
unsigned char var_20 = (unsigned char)167;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
