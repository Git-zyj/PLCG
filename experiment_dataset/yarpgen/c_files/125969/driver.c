#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7987665410213726587ULL;
unsigned char var_3 = (unsigned char)140;
signed char var_6 = (signed char)78;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 15683736234301425950ULL;
int zero = 0;
long long int var_12 = -564235384174458708LL;
unsigned short var_13 = (unsigned short)56882;
unsigned char var_14 = (unsigned char)107;
unsigned int var_15 = 217097696U;
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
