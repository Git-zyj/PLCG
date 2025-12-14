#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5738390964330080800LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 5942639807555367099LL;
unsigned char var_9 = (unsigned char)198;
int zero = 0;
long long int var_10 = -1889506081444619855LL;
int var_11 = -1388702081;
unsigned int var_12 = 2543694284U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
