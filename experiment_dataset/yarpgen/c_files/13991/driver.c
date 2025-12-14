#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1915229874;
unsigned int var_1 = 2494163303U;
long long int var_2 = -3501921315174653409LL;
short var_4 = (short)18291;
unsigned long long int var_5 = 14251850891423322898ULL;
int var_6 = -1469943060;
unsigned char var_7 = (unsigned char)163;
int zero = 0;
signed char var_10 = (signed char)-50;
signed char var_11 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
