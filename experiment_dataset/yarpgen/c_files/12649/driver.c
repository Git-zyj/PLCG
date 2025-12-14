#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1495605863689952438LL;
unsigned long long int var_3 = 9187624852760770339ULL;
signed char var_9 = (signed char)110;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)21796;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 11151989838640148436ULL;
unsigned char var_19 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
