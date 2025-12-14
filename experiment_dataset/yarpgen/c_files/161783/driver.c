#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4265270385U;
int var_2 = 1801620964;
unsigned int var_9 = 3389624625U;
signed char var_11 = (signed char)10;
long long int var_13 = -4297969945048814901LL;
signed char var_14 = (signed char)-69;
int zero = 0;
unsigned int var_15 = 1691499749U;
unsigned long long int var_16 = 2076398091479237890ULL;
void init() {
}

void checksum() {
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
