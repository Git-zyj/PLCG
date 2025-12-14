#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13523892069981947157ULL;
unsigned short var_4 = (unsigned short)61280;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 2023381865U;
int zero = 0;
signed char var_10 = (signed char)-68;
unsigned short var_11 = (unsigned short)16604;
unsigned char var_12 = (unsigned char)148;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1131979969276162150LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
