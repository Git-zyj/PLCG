#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 6200640001380917270ULL;
long long int var_13 = 2577752523990113606LL;
int var_14 = 1831034853;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-55;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 11856212749126551780ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
