#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2357304212U;
unsigned long long int var_5 = 17401891603115030300ULL;
long long int var_6 = -5562703009687780356LL;
short var_7 = (short)149;
long long int var_13 = 4558191683341955554LL;
unsigned long long int var_14 = 1514874880431337314ULL;
int zero = 0;
unsigned long long int var_20 = 7392084213189981879ULL;
unsigned int var_21 = 3593663629U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
