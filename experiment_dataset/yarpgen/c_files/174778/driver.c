#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 985908973U;
short var_4 = (short)-4673;
short var_8 = (short)-4476;
_Bool var_9 = (_Bool)1;
int var_11 = -163299186;
unsigned int var_12 = 2706457154U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)190;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1284712648U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
