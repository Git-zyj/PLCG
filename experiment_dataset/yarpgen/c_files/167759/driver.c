#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
unsigned short var_2 = (unsigned short)39195;
unsigned long long int var_3 = 15661117662498601093ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 1603802777U;
int var_16 = -552716441;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
