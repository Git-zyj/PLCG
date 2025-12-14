#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6175306295669083915ULL;
unsigned long long int var_1 = 336774251733752772ULL;
short var_2 = (short)-16410;
unsigned long long int var_3 = 7308096536651503598ULL;
short var_5 = (short)10308;
short var_6 = (short)-31599;
int var_7 = -1668664721;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)40775;
unsigned short var_10 = (unsigned short)11118;
int zero = 0;
short var_11 = (short)-21618;
int var_12 = -130233568;
void init() {
}

void checksum() {
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
