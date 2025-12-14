#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2038947244335761488ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3954169775U;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1774566743843350222LL;
unsigned char var_7 = (unsigned char)55;
unsigned int var_8 = 3145247105U;
long long int var_9 = -4147015679419691920LL;
long long int var_10 = -7752820594945387118LL;
unsigned short var_12 = (unsigned short)5284;
int zero = 0;
unsigned short var_13 = (unsigned short)8876;
signed char var_14 = (signed char)1;
int var_15 = -797427254;
signed char var_16 = (signed char)27;
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
