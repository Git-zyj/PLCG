#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2994519789U;
unsigned char var_4 = (unsigned char)172;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 13343440U;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_17 = 1649426941;
long long int var_18 = -3380591873478543821LL;
void init() {
}

void checksum() {
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
