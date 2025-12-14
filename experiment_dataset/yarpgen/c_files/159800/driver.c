#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6331179063030319639LL;
unsigned short var_2 = (unsigned short)35933;
unsigned short var_3 = (unsigned short)39073;
int var_15 = -1054773650;
unsigned short var_16 = (unsigned short)21363;
int zero = 0;
unsigned char var_18 = (unsigned char)191;
long long int var_19 = -594611635496925133LL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2439671537755028290ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
