#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8639159078501149872ULL;
unsigned long long int var_7 = 16864771685466297747ULL;
long long int var_9 = -2271348641584081133LL;
long long int var_13 = 5623026741731732424LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)15381;
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
