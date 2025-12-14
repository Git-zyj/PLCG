#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10078684762477005130ULL;
unsigned char var_3 = (unsigned char)244;
long long int var_4 = 1572268180388676651LL;
unsigned short var_9 = (unsigned short)46793;
unsigned int var_11 = 3691500461U;
int zero = 0;
unsigned long long int var_14 = 15204944328525074927ULL;
signed char var_15 = (signed char)54;
unsigned long long int var_16 = 15634542870818686962ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
