#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 1307505603;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_6 = -2144637140;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_9 = -1110811523;
int zero = 0;
int var_10 = -759586978;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
