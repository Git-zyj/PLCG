#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4428446119517460461ULL;
int var_2 = 904569938;
short var_3 = (short)-18707;
int var_11 = -2012957549;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 4218941719U;
int zero = 0;
short var_16 = (short)-1254;
short var_17 = (short)-4208;
unsigned char var_18 = (unsigned char)234;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
