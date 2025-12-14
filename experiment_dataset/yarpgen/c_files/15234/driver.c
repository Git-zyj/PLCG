#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 14798829561997951221ULL;
unsigned char var_5 = (unsigned char)209;
signed char var_6 = (signed char)-31;
unsigned long long int var_7 = 16380968308950473279ULL;
unsigned long long int var_8 = 1060382548454738601ULL;
int zero = 0;
signed char var_12 = (signed char)6;
long long int var_13 = 1868512243275119810LL;
void init() {
}

void checksum() {
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
