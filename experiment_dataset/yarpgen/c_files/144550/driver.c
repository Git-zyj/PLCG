#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4105058782U;
unsigned long long int var_3 = 17474761304934593848ULL;
unsigned char var_7 = (unsigned char)166;
_Bool var_8 = (_Bool)0;
long long int var_10 = 8316270915054313282LL;
unsigned int var_14 = 292975715U;
int zero = 0;
int var_15 = -1304601832;
unsigned short var_16 = (unsigned short)41739;
unsigned short var_17 = (unsigned short)40737;
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
