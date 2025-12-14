#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)212;
long long int var_3 = 2035614065084352663LL;
_Bool var_4 = (_Bool)1;
long long int var_7 = 5299972896751347938LL;
unsigned short var_9 = (unsigned short)43144;
int var_10 = -1547337469;
int zero = 0;
long long int var_13 = 5106365681154600782LL;
unsigned char var_14 = (unsigned char)118;
signed char var_15 = (signed char)101;
long long int var_16 = -3494449711230011888LL;
void init() {
}

void checksum() {
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
