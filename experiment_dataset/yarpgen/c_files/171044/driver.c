#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 185817997U;
unsigned long long int var_3 = 6450388284501977807ULL;
unsigned long long int var_9 = 12858900708083808540ULL;
unsigned char var_11 = (unsigned char)214;
unsigned long long int var_12 = 17154695636925312856ULL;
long long int var_13 = 1000881519106016248LL;
long long int var_14 = -8800803659145716830LL;
unsigned short var_15 = (unsigned short)44495;
int zero = 0;
unsigned short var_19 = (unsigned short)27728;
unsigned long long int var_20 = 7967349715316123646ULL;
short var_21 = (short)11367;
signed char var_22 = (signed char)81;
unsigned int var_23 = 570973166U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
