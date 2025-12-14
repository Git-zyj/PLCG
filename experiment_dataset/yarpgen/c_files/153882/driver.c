#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 700645774;
long long int var_2 = -8151254263519507668LL;
unsigned long long int var_5 = 9443374021706846466ULL;
unsigned short var_7 = (unsigned short)39189;
long long int var_8 = 1464859204539414990LL;
unsigned long long int var_10 = 4838503338226481876ULL;
int var_15 = 1782990835;
int zero = 0;
int var_18 = -63567288;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
