#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13108789175201917722ULL;
long long int var_2 = -2717598191459859810LL;
unsigned long long int var_5 = 3406808043950178492ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2072393565U;
unsigned short var_12 = (unsigned short)36894;
int zero = 0;
unsigned int var_19 = 3957442696U;
unsigned short var_20 = (unsigned short)27559;
unsigned long long int var_21 = 11613074497880964802ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
