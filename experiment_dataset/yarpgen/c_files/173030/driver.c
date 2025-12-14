#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -930106123281164575LL;
signed char var_6 = (signed char)-14;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)-121;
int zero = 0;
int var_16 = 1896214911;
int var_17 = -1206174290;
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
