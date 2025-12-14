#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3010820468541644546LL;
long long int var_5 = 6955592689622072611LL;
_Bool var_7 = (_Bool)0;
long long int var_11 = -5238249588649728800LL;
int zero = 0;
unsigned long long int var_15 = 10374952851109422541ULL;
unsigned long long int var_16 = 10095006846408028510ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
