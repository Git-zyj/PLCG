#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3115703004U;
_Bool var_4 = (_Bool)0;
long long int var_15 = 2935174311633024103LL;
unsigned long long int var_18 = 1775060294692223545ULL;
int zero = 0;
unsigned int var_20 = 3183431357U;
unsigned long long int var_21 = 17429942408318933961ULL;
long long int var_22 = 4411161218227019309LL;
unsigned long long int var_23 = 10156651067390160586ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
