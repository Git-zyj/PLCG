#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5354;
unsigned long long int var_1 = 13232279958970801323ULL;
short var_3 = (short)27767;
unsigned int var_4 = 2704833976U;
unsigned long long int var_5 = 15939818203625681212ULL;
int zero = 0;
unsigned long long int var_10 = 1253114021081045682ULL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
