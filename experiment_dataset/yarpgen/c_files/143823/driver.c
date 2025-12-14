#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -709035730;
_Bool var_5 = (_Bool)1;
int var_6 = 163869917;
int var_7 = -277230346;
int var_9 = 1583936458;
int var_11 = -1780503871;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -889605071;
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
