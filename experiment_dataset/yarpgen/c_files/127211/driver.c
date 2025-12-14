#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)77;
_Bool var_1 = (_Bool)1;
int var_2 = -381953309;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1816787601U;
long long int var_7 = -2848947419094524073LL;
short var_9 = (short)-9147;
int var_10 = 236434512;
unsigned int var_12 = 2315705643U;
short var_14 = (short)25451;
int var_15 = 892197755;
signed char var_19 = (signed char)96;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)19084;
unsigned int var_22 = 1156225064U;
unsigned long long int var_23 = 2359946079754695291ULL;
int var_24 = -999685920;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
