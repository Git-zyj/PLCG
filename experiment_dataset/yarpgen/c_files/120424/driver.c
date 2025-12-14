#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46027;
long long int var_3 = 9083314641732270275LL;
unsigned int var_6 = 1598919190U;
unsigned long long int var_9 = 12119904161149818049ULL;
int zero = 0;
unsigned long long int var_12 = 5877650648601404755ULL;
_Bool var_13 = (_Bool)1;
int var_14 = 970072110;
unsigned long long int var_15 = 17509721742885617402ULL;
unsigned long long int var_16 = 17990435818191169471ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
