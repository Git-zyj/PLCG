#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6295479520147848749LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 7260877830014347709ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 7350176998324360533ULL;
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
