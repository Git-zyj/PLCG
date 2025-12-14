#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_14 = (_Bool)0;
unsigned long long int var_18 = 6954743347948613523ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 1657546369531606882ULL;
signed char var_21 = (signed char)104;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
