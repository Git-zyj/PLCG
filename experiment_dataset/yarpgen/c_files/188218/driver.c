#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 15735786688044825387ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 1096624244505918284ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)61135;
void init() {
}

void checksum() {
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
