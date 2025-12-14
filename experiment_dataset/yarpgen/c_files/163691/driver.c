#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
long long int var_4 = 1669362313656902871LL;
unsigned long long int var_5 = 7489152421922888698ULL;
signed char var_8 = (signed char)-106;
unsigned short var_9 = (unsigned short)1565;
int var_11 = -539953986;
signed char var_12 = (signed char)54;
int zero = 0;
unsigned char var_13 = (unsigned char)116;
int var_14 = -250904428;
int var_15 = -1517063939;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
