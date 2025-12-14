#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16301367760363418635ULL;
short var_7 = (short)-21167;
unsigned short var_9 = (unsigned short)44438;
int zero = 0;
unsigned long long int var_10 = 16614412619546470411ULL;
_Bool var_11 = (_Bool)1;
int var_12 = 1999401922;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
