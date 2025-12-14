#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -754358322;
int var_1 = -1924967849;
long long int var_2 = 8579662863988155464LL;
unsigned long long int var_3 = 9465316114495235710ULL;
unsigned short var_5 = (unsigned short)25322;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
short var_14 = (short)32251;
int var_15 = -1338782520;
short var_16 = (short)-30045;
int zero = 0;
signed char var_18 = (signed char)-124;
int var_19 = -1746394970;
signed char var_20 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
