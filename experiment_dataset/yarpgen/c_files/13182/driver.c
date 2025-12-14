#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16233;
signed char var_4 = (signed char)-95;
unsigned int var_5 = 3184742682U;
unsigned short var_12 = (unsigned short)32222;
long long int var_15 = -7343483931564666996LL;
unsigned short var_16 = (unsigned short)44673;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8028662033158519612ULL;
void init() {
}

void checksum() {
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
