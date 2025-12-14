#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 929209667U;
long long int var_2 = 2319007929468439557LL;
long long int var_5 = 5908245475664651469LL;
unsigned short var_11 = (unsigned short)41144;
int zero = 0;
long long int var_15 = -6818408922132836791LL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)5288;
unsigned int var_18 = 1917775897U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
