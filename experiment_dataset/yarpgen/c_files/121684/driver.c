#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8416615605184846484ULL;
unsigned short var_2 = (unsigned short)2530;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)185;
unsigned long long int var_10 = 8888415077213834556ULL;
int zero = 0;
unsigned int var_13 = 4087989249U;
unsigned int var_14 = 545290710U;
void init() {
}

void checksum() {
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
