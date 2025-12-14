#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 568031616U;
unsigned short var_5 = (unsigned short)25898;
unsigned short var_13 = (unsigned short)16751;
long long int var_17 = 3569231219859104395LL;
int zero = 0;
unsigned long long int var_19 = 5620429560048062454ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
