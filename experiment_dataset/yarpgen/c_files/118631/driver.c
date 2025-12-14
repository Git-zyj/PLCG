#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)30877;
short var_7 = (short)1556;
int var_18 = 2065832779;
int zero = 0;
long long int var_19 = 6486854798402834561LL;
unsigned long long int var_20 = 9438126568265937986ULL;
long long int var_21 = 153216769851137289LL;
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
