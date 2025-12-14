#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 3336247104799101462LL;
unsigned char var_6 = (unsigned char)144;
long long int var_12 = 7848155014134562792LL;
int zero = 0;
unsigned char var_14 = (unsigned char)114;
long long int var_15 = 6489133290262822684LL;
void init() {
}

void checksum() {
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
