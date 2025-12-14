#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3047500088055254876LL;
long long int var_3 = 2006375745469724047LL;
long long int var_5 = 7903078207390549555LL;
long long int var_6 = 236223065760364343LL;
long long int var_8 = 3172708233419418778LL;
long long int var_10 = 5840495752852477180LL;
long long int var_15 = -5297784821975980209LL;
int zero = 0;
long long int var_20 = 7334017966286803078LL;
long long int var_21 = -7394085055157378680LL;
long long int var_22 = -8712098691110474196LL;
long long int var_23 = 6012297325676932100LL;
long long int var_24 = 5498798734668865183LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
