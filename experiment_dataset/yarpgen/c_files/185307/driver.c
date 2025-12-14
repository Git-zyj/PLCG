#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3335849430U;
int var_2 = 1851992010;
short var_6 = (short)-324;
short var_13 = (short)27914;
int zero = 0;
short var_15 = (short)5055;
unsigned int var_16 = 3661762936U;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 5431626119695087290ULL;
unsigned short var_19 = (unsigned short)47907;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
