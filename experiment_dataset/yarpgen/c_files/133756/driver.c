#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5930;
unsigned long long int var_4 = 9098988534017443807ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 3663153738U;
unsigned long long int var_9 = 6387672599972489503ULL;
unsigned short var_11 = (unsigned short)35903;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2254809576U;
unsigned long long int var_16 = 1850682791364062454ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
