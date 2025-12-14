#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26560;
_Bool var_1 = (_Bool)0;
long long int var_2 = -8315801098822044371LL;
signed char var_4 = (signed char)48;
long long int var_8 = 6002723173157811878LL;
signed char var_11 = (signed char)-104;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 5694766030228957792LL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
