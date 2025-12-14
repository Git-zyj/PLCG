#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 775754470U;
short var_3 = (short)29478;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)27839;
int zero = 0;
unsigned short var_13 = (unsigned short)19366;
int var_14 = 310862198;
unsigned long long int var_15 = 5053313717842784488ULL;
signed char var_16 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
