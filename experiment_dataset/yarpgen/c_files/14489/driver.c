#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3299728226U;
unsigned long long int var_4 = 1615616301203966695ULL;
int var_6 = 1036337048;
unsigned char var_7 = (unsigned char)100;
long long int var_9 = -1268793426654888060LL;
int zero = 0;
long long int var_10 = 9048557663602980484LL;
signed char var_11 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
