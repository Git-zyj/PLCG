#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6668;
unsigned long long int var_3 = 2664724949170323495ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 3816885035164187109ULL;
int zero = 0;
short var_19 = (short)-5824;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)32;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
