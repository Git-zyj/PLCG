#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5501508675214597593LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 10170881350055410973ULL;
unsigned char var_6 = (unsigned char)60;
int zero = 0;
unsigned long long int var_16 = 10868592509622864617ULL;
long long int var_17 = 5598955437339389831LL;
void init() {
}

void checksum() {
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
