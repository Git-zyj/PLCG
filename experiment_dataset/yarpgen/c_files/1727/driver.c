#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1403445867U;
long long int var_6 = 7227990014939503498LL;
long long int var_9 = -4855326210091991080LL;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1315492528U;
void init() {
}

void checksum() {
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
