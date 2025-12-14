#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int var_15 = -771972069;
int zero = 0;
long long int var_18 = -1454920839322090449LL;
unsigned int var_19 = 3301610832U;
int var_20 = 1541628354;
_Bool var_21 = (_Bool)0;
long long int var_22 = 7450805477856622908LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
