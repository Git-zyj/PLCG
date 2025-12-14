#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15895303931650100858ULL;
unsigned long long int var_4 = 5029423897421006871ULL;
long long int var_9 = -620366358311324314LL;
unsigned short var_14 = (unsigned short)34920;
int zero = 0;
unsigned int var_17 = 3046548437U;
long long int var_18 = -2550795153736370935LL;
unsigned int var_19 = 2354399636U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
