#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7944315719802160393ULL;
int var_1 = -1835727536;
unsigned long long int var_3 = 2555745108129818739ULL;
int var_5 = -883229038;
unsigned long long int var_7 = 8674063050442377208ULL;
int var_9 = 1652888477;
int zero = 0;
unsigned long long int var_10 = 8497344142874241374ULL;
int var_11 = 368338847;
unsigned long long int var_12 = 9668288583223369373ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
