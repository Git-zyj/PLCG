#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7253076327414769794ULL;
_Bool var_1 = (_Bool)1;
short var_2 = (short)23253;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 7468265205471072685ULL;
signed char var_5 = (signed char)-39;
long long int var_6 = -1077267787841170932LL;
unsigned int var_7 = 3866137487U;
unsigned short var_8 = (unsigned short)31895;
unsigned short var_9 = (unsigned short)59316;
unsigned long long int var_10 = 12414140336287543047ULL;
int zero = 0;
signed char var_11 = (signed char)31;
short var_12 = (short)8469;
unsigned int var_13 = 1166877817U;
unsigned long long int var_14 = 14547888723412372820ULL;
signed char var_15 = (signed char)-8;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
