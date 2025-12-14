#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1324419586;
unsigned int var_1 = 178359734U;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)49;
signed char var_5 = (signed char)96;
long long int var_7 = -5334033402054439115LL;
int zero = 0;
unsigned long long int var_10 = 5190417986920447111ULL;
signed char var_11 = (signed char)-66;
signed char var_12 = (signed char)5;
signed char var_13 = (signed char)107;
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
