#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1026293092;
short var_2 = (short)14971;
short var_5 = (short)10430;
unsigned int var_6 = 2630798368U;
long long int var_9 = 2791922210991767429LL;
int zero = 0;
unsigned long long int var_10 = 11634052982936496529ULL;
long long int var_11 = -1085479836613220202LL;
unsigned short var_12 = (unsigned short)53629;
short var_13 = (short)30044;
int var_14 = 1830291398;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
