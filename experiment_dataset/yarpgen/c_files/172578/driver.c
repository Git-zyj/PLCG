#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1529564519U;
long long int var_2 = -1855539167442235082LL;
long long int var_13 = 8067371549545163740LL;
unsigned int var_17 = 2419909286U;
int zero = 0;
unsigned int var_20 = 2192854469U;
unsigned int var_21 = 2990583766U;
long long int var_22 = -2309017987653198391LL;
long long int var_23 = 3682877839288571146LL;
long long int var_24 = -4274840906595857913LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
