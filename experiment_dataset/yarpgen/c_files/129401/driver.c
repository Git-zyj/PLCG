#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)12256;
unsigned int var_6 = 636140658U;
_Bool var_8 = (_Bool)1;
long long int var_12 = -4097040955207457772LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 8489682500912088637LL;
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
