#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = -2521433748426815603LL;
long long int var_6 = 6122092182938402551LL;
long long int var_15 = 6099456372046931735LL;
unsigned long long int var_16 = 15581159058403566530ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -1357345742657509150LL;
long long int var_19 = 5142228477466577782LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
