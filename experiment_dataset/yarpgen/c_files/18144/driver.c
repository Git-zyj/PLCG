#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7257861520959695069LL;
_Bool var_5 = (_Bool)0;
long long int var_8 = 8355732631342261507LL;
long long int var_14 = -4563320475704599604LL;
int zero = 0;
unsigned long long int var_15 = 7752155230761391510ULL;
unsigned long long int var_16 = 15282179818575906393ULL;
unsigned long long int var_17 = 5502049801058446784ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
