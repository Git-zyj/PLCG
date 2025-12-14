#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6634565215018273291LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 14437934237460097489ULL;
signed char var_8 = (signed char)96;
int zero = 0;
unsigned short var_10 = (unsigned short)33582;
int var_11 = -1397862995;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
