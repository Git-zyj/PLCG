#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -224858739;
signed char var_2 = (signed char)-77;
long long int var_3 = -4168079129597889467LL;
int var_6 = -505519029;
signed char var_8 = (signed char)-109;
signed char var_9 = (signed char)-46;
short var_10 = (short)-32552;
unsigned long long int var_11 = 16077151020121152283ULL;
int zero = 0;
signed char var_12 = (signed char)99;
unsigned short var_13 = (unsigned short)22928;
signed char var_14 = (signed char)48;
short var_15 = (short)27488;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
