#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17463920728314533258ULL;
int var_3 = -1920399873;
int var_5 = -694820267;
int var_9 = -902586693;
unsigned long long int var_10 = 298732654730543429ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4003163918U;
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
