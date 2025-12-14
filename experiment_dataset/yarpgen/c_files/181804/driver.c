#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 91184446;
unsigned short var_2 = (unsigned short)36158;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)20321;
unsigned long long int var_10 = 9608180551567992336ULL;
long long int var_12 = 1197169572972231562LL;
unsigned long long int var_13 = 12836536262278454780ULL;
int zero = 0;
int var_15 = 734501524;
int var_16 = -1947513992;
short var_17 = (short)4919;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
