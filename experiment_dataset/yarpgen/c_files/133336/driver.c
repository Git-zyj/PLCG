#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 10483088515514429906ULL;
int zero = 0;
long long int var_13 = 1374307736757690527LL;
unsigned long long int var_14 = 17580202702450115200ULL;
unsigned long long int var_15 = 18014805341521876310ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
