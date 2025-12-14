#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_8 = 897824590;
long long int var_11 = -6674776753947969942LL;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)22759;
long long int var_15 = 4453792104492727115LL;
int zero = 0;
unsigned long long int var_18 = 1478100637556122286ULL;
long long int var_19 = 8693147224796243692LL;
_Bool var_20 = (_Bool)0;
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
