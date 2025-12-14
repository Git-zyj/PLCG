#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
long long int var_1 = -5379447125890429276LL;
long long int var_3 = 3368272638734575631LL;
short var_6 = (short)-4528;
int var_7 = 1625365326;
int zero = 0;
long long int var_11 = -249482068916195254LL;
int var_12 = 1516873478;
long long int var_13 = -5657265191022310412LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
