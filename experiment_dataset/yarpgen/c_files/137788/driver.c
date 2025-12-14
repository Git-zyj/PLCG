#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33452;
int var_10 = -390077832;
signed char var_11 = (signed char)-106;
unsigned long long int var_12 = 8521832408727042182ULL;
signed char var_13 = (signed char)48;
int var_14 = 1614180896;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -512690771;
short var_21 = (short)8522;
short var_22 = (short)-17839;
short var_23 = (short)8490;
int var_24 = 252577803;
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
