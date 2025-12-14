#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1913142906661888574ULL;
unsigned long long int var_1 = 10418240968241607857ULL;
long long int var_5 = -3161464933682169642LL;
unsigned char var_7 = (unsigned char)128;
long long int var_8 = -7927315942832429251LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)12;
int var_12 = -1098483506;
long long int var_13 = 2256872748705307805LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
