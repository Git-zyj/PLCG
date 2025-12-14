#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13421902714726828596ULL;
unsigned long long int var_4 = 17140895634354612924ULL;
short var_6 = (short)26316;
unsigned int var_7 = 547539059U;
short var_13 = (short)5786;
unsigned int var_18 = 257728568U;
int zero = 0;
unsigned long long int var_19 = 14035933943945099429ULL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9372610622283428091ULL;
unsigned long long int var_22 = 10156334517447208209ULL;
unsigned int var_23 = 1977694648U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
