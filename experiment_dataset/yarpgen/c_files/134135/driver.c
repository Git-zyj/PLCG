#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)57105;
short var_5 = (short)-11416;
int var_11 = -866290562;
unsigned short var_14 = (unsigned short)33675;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3021882266U;
void init() {
}

void checksum() {
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
