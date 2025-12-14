#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7570537253284332600LL;
short var_4 = (short)1547;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int var_10 = -1898961882;
int zero = 0;
unsigned long long int var_12 = 12285963123982397259ULL;
int var_13 = 1229416455;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
