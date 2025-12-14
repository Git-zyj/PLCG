#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12489;
signed char var_3 = (signed char)60;
unsigned long long int var_9 = 11733304037916888654ULL;
signed char var_10 = (signed char)-109;
int var_11 = -1669659809;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)(-127 - 1);
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
