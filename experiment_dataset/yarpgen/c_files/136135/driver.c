#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1878590231;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)57369;
long long int var_6 = -4351765282167503961LL;
long long int var_9 = 8571759997799370543LL;
_Bool var_10 = (_Bool)0;
int var_11 = -1070845837;
signed char var_12 = (signed char)-111;
int var_14 = 643360066;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)17699;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
