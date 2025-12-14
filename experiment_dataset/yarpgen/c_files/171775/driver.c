#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)114;
signed char var_4 = (signed char)-120;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 3242381874U;
unsigned char var_11 = (unsigned char)166;
unsigned long long int var_12 = 6222971187874412029ULL;
short var_13 = (short)13529;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
