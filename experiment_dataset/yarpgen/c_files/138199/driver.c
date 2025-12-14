#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)78;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 13515607618712748955ULL;
int zero = 0;
int var_10 = -499038789;
short var_11 = (short)27012;
short var_12 = (short)-20674;
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
