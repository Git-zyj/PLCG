#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)58294;
unsigned long long int var_8 = 17553582914601107715ULL;
unsigned int var_10 = 2679163523U;
unsigned short var_12 = (unsigned short)14424;
int zero = 0;
unsigned int var_15 = 4057906299U;
unsigned char var_16 = (unsigned char)85;
long long int var_17 = -4607521547232192037LL;
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
