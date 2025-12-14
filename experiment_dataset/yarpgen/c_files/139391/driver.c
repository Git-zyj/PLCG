#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8450261462733288094LL;
_Bool var_2 = (_Bool)0;
long long int var_5 = 2346595809347147252LL;
long long int var_13 = -6799156487515730004LL;
signed char var_16 = (signed char)59;
int zero = 0;
long long int var_18 = 6361723479420251022LL;
int var_19 = 1119310329;
int var_20 = 869869659;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
