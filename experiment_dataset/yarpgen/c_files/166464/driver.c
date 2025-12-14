#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)121;
_Bool var_7 = (_Bool)1;
long long int var_9 = 6720333857192489898LL;
unsigned long long int var_10 = 4242265908464537713ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 5642277403818988049ULL;
long long int var_15 = 578060346749788732LL;
unsigned short var_16 = (unsigned short)61054;
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
