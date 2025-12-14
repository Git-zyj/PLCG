#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17927050316487411302ULL;
unsigned int var_2 = 26476864U;
unsigned char var_3 = (unsigned char)158;
unsigned long long int var_8 = 15510098365053949672ULL;
long long int var_9 = 2051265406911111107LL;
int zero = 0;
unsigned long long int var_12 = 1300881642893996745ULL;
long long int var_13 = 5040274091722482374LL;
signed char var_14 = (signed char)-94;
_Bool var_15 = (_Bool)1;
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
