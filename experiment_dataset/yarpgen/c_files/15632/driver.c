#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8793860673921878572LL;
int var_3 = -953908974;
unsigned long long int var_5 = 8604550422858931809ULL;
_Bool var_7 = (_Bool)1;
signed char var_11 = (signed char)-39;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_18 = (short)22360;
int var_19 = -1351511236;
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
