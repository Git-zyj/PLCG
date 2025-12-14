#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 780074621U;
unsigned long long int var_1 = 4613259357732931896ULL;
int var_2 = -1318153221;
unsigned short var_3 = (unsigned short)29122;
unsigned int var_4 = 3513558648U;
short var_5 = (short)7857;
unsigned int var_6 = 4102217283U;
int var_7 = -507545190;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -8722340417031041967LL;
int var_18 = -935393374;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
