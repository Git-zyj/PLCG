#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57841;
unsigned int var_3 = 1274829869U;
unsigned short var_8 = (unsigned short)5003;
long long int var_13 = 2217577296532370750LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)-29323;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-88;
signed char var_20 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
