#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9844;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)79;
unsigned long long int var_11 = 11910691625793836998ULL;
int zero = 0;
short var_12 = (short)27946;
short var_13 = (short)14673;
unsigned long long int var_14 = 17298240636590624971ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
