#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45737;
unsigned long long int var_6 = 15985695508694439511ULL;
unsigned int var_9 = 77525394U;
unsigned int var_12 = 3338880678U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_17 = 1796800750;
unsigned short var_18 = (unsigned short)21743;
unsigned char var_19 = (unsigned char)143;
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
