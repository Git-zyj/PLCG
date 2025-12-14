#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -219425004;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)-53;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 3384845555869429179ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)66;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int var_17 = -372675340;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
