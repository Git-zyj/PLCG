#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 273441869;
unsigned long long int var_1 = 10451445022408145878ULL;
short var_3 = (short)-17603;
unsigned int var_4 = 3687284896U;
short var_6 = (short)-19310;
unsigned short var_17 = (unsigned short)41235;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-17;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
