#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -261628758;
long long int var_1 = -4180458745595711732LL;
long long int var_2 = 4469167107035289428LL;
unsigned int var_6 = 3632276616U;
int var_9 = 388939282;
signed char var_10 = (signed char)-54;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3797898784U;
unsigned int var_13 = 3634352643U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
