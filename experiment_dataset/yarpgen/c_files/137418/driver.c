#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1386750685;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 18039206967193182284ULL;
long long int var_9 = 8668519606827175672LL;
unsigned long long int var_10 = 13248664103420117359ULL;
unsigned long long int var_11 = 11355446802349724907ULL;
int zero = 0;
unsigned int var_12 = 144756259U;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)199;
unsigned long long int var_15 = 18057312897858523911ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
