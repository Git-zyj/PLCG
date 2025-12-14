#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36609;
unsigned short var_3 = (unsigned short)16588;
short var_6 = (short)9485;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)17601;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-5722;
int var_17 = 1326723507;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
