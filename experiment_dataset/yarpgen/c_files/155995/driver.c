#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2559677083729249663LL;
long long int var_4 = 1605128091587851447LL;
short var_8 = (short)-27383;
int var_9 = -575685617;
int var_10 = -352799972;
signed char var_11 = (signed char)24;
signed char var_13 = (signed char)123;
int var_16 = 314846463;
int zero = 0;
unsigned int var_17 = 2017526195U;
unsigned int var_18 = 1696213011U;
short var_19 = (short)2452;
int var_20 = 1690231187;
unsigned int var_21 = 2526170226U;
unsigned int var_22 = 797073508U;
unsigned long long int var_23 = 1172228968308679503ULL;
int var_24 = -1106990242;
unsigned short var_25 = (unsigned short)63050;
short var_26 = (short)-7866;
_Bool var_27 = (_Bool)0;
long long int var_28 = -5751940483974267259LL;
unsigned int var_29 = 4170501899U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
