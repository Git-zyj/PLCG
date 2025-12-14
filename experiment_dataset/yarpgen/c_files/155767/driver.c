#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 6552420883938514719LL;
signed char var_3 = (signed char)-6;
unsigned long long int var_5 = 12430982808285235707ULL;
unsigned long long int var_6 = 11785138925275996709ULL;
int var_7 = 599804915;
unsigned int var_9 = 1235776606U;
unsigned int var_10 = 3995399686U;
int zero = 0;
unsigned char var_14 = (unsigned char)212;
unsigned char var_15 = (unsigned char)177;
void init() {
}

void checksum() {
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
