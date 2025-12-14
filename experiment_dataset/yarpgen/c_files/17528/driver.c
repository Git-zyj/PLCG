#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1082424107;
int var_7 = -1782150944;
unsigned int var_8 = 1313592802U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_14 = 5861513916950313035ULL;
unsigned long long int var_16 = 2326940119836474599ULL;
int zero = 0;
int var_18 = 39320712;
long long int var_19 = 4653902650651188886LL;
unsigned short var_20 = (unsigned short)64453;
unsigned long long int var_21 = 15180609309542601049ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
