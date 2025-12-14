#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)27;
unsigned long long int var_8 = 5088291363007481718ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)3075;
int zero = 0;
unsigned int var_16 = 3315493920U;
long long int var_17 = 4297552138961713458LL;
signed char var_18 = (signed char)-13;
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
