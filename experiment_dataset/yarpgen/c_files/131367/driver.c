#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -829613402;
long long int var_4 = -1415553569929270718LL;
short var_6 = (short)14260;
long long int var_7 = -1514490207891141909LL;
unsigned int var_9 = 3284156819U;
signed char var_10 = (signed char)-103;
unsigned char var_12 = (unsigned char)132;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1400396099;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
