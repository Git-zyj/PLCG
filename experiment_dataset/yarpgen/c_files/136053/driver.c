#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1139008104U;
long long int var_1 = 1668076797564794209LL;
unsigned long long int var_2 = 14649258386984901639ULL;
signed char var_5 = (signed char)-50;
unsigned long long int var_7 = 582527155487797466ULL;
unsigned int var_8 = 4252325806U;
unsigned int var_10 = 2074052023U;
int var_11 = 525106413;
signed char var_14 = (signed char)-127;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)249;
unsigned int var_17 = 1576693816U;
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
