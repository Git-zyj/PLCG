#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11501;
unsigned long long int var_5 = 13838749265217202790ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 12479434658745479483ULL;
int zero = 0;
long long int var_19 = 6208013279263560377LL;
long long int var_20 = 2123452736228471649LL;
int var_21 = -731838854;
int var_22 = 1884719083;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
