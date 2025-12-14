#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1211927624;
short var_9 = (short)8060;
long long int var_10 = -8955372667820489233LL;
int zero = 0;
unsigned long long int var_11 = 7542349210292912521ULL;
unsigned char var_12 = (unsigned char)114;
unsigned int var_13 = 2269876400U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
