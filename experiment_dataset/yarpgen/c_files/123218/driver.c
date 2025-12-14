#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)88;
long long int var_5 = 6529656348593687448LL;
unsigned short var_6 = (unsigned short)14860;
unsigned int var_8 = 3569694857U;
unsigned int var_9 = 674158182U;
unsigned short var_11 = (unsigned short)46863;
unsigned int var_12 = 2548103893U;
unsigned short var_16 = (unsigned short)22730;
int zero = 0;
unsigned int var_17 = 78425131U;
signed char var_18 = (signed char)13;
unsigned long long int var_19 = 17135370115349766500ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
