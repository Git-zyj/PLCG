#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58723;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)21792;
int zero = 0;
short var_17 = (short)11868;
unsigned char var_18 = (unsigned char)252;
unsigned char var_19 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
