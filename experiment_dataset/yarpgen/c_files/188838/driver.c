#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)25547;
int var_12 = -1885567106;
long long int var_14 = 3370826298682313583LL;
unsigned long long int var_17 = 17574453576144703184ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8504848258848306324LL;
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
