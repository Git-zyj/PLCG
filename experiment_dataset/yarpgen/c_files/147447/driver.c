#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)112;
int var_2 = 1356572735;
short var_3 = (short)-28417;
unsigned long long int var_6 = 1799056530202037714ULL;
unsigned short var_7 = (unsigned short)44815;
unsigned int var_9 = 3052895498U;
unsigned char var_10 = (unsigned char)1;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
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
