#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12938955623578522157ULL;
int var_3 = -446304420;
unsigned int var_8 = 934566273U;
int zero = 0;
unsigned long long int var_14 = 2207758518061452170ULL;
signed char var_15 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
