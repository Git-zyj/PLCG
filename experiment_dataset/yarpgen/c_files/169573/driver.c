#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
_Bool var_1 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned short var_10 = (unsigned short)5031;
int zero = 0;
unsigned long long int var_11 = 7375738571628078201ULL;
unsigned short var_12 = (unsigned short)1712;
void init() {
}

void checksum() {
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
