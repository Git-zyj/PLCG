#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25006;
long long int var_5 = 5001751739042140768LL;
int var_15 = 850340804;
int zero = 0;
unsigned short var_18 = (unsigned short)25474;
unsigned long long int var_19 = 16156520742218358322ULL;
long long int var_20 = 3171253810041069295LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
