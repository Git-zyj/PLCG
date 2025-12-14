#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_3 = -6076537715994740515LL;
int var_6 = -638557321;
_Bool var_7 = (_Bool)0;
long long int var_9 = 5703616229777193606LL;
int zero = 0;
signed char var_10 = (signed char)-32;
long long int var_11 = -5295854347550639902LL;
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
