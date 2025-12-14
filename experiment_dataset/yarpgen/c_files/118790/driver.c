#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)11015;
long long int var_9 = 4041410248799665271LL;
unsigned short var_12 = (unsigned short)58706;
long long int var_13 = 8602751540771598049LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 16785903337896194647ULL;
unsigned short var_18 = (unsigned short)11004;
long long int var_19 = 78620005478061944LL;
void init() {
}

void checksum() {
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
