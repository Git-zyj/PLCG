#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2899530923U;
_Bool var_3 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)908;
unsigned int var_17 = 464557304U;
unsigned char var_18 = (unsigned char)231;
void init() {
}

void checksum() {
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
