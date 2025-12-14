#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2028440710U;
signed char var_5 = (signed char)-46;
unsigned char var_6 = (unsigned char)143;
unsigned long long int var_8 = 4810775433222444130ULL;
_Bool var_11 = (_Bool)1;
int var_17 = 1736486521;
int zero = 0;
int var_19 = 888844062;
signed char var_20 = (signed char)110;
unsigned int var_21 = 3961190272U;
int var_22 = 727746879;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
