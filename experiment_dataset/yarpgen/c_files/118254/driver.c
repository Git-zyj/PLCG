#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -5512214371103166486LL;
_Bool var_4 = (_Bool)0;
unsigned int var_8 = 2872331950U;
unsigned short var_9 = (unsigned short)2981;
unsigned int var_10 = 1207477949U;
int zero = 0;
unsigned long long int var_12 = 15933964256839193450ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)32859;
signed char var_15 = (signed char)-72;
unsigned long long int var_16 = 14234072709323107210ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
