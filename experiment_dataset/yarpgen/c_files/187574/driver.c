#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17146659023892254451ULL;
int var_3 = -1977256778;
unsigned int var_5 = 1597236722U;
unsigned long long int var_7 = 3112253911664003539ULL;
short var_9 = (short)-22595;
int zero = 0;
unsigned short var_10 = (unsigned short)37549;
unsigned int var_11 = 292927944U;
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
