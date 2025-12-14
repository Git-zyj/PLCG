#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2614929996U;
unsigned int var_2 = 2944858317U;
unsigned short var_4 = (unsigned short)35593;
unsigned int var_7 = 3001932819U;
long long int var_9 = 3796977576335282893LL;
unsigned long long int var_11 = 6637474466180887055ULL;
int var_12 = 1481171646;
int zero = 0;
signed char var_17 = (signed char)18;
signed char var_18 = (signed char)87;
void init() {
}

void checksum() {
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
