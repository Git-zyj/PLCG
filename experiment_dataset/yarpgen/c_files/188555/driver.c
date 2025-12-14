#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
_Bool var_1 = (_Bool)0;
int var_2 = -1857497654;
int var_6 = 776742010;
unsigned int var_8 = 748400249U;
unsigned char var_9 = (unsigned char)57;
short var_10 = (short)2101;
int zero = 0;
unsigned int var_11 = 255845234U;
int var_12 = -793583281;
long long int var_13 = -4219434506523412172LL;
signed char var_14 = (signed char)-37;
long long int var_15 = -5455041498491677381LL;
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
