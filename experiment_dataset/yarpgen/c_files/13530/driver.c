#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4064126961239410414LL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 4134140469U;
int var_6 = -1813708072;
unsigned char var_7 = (unsigned char)226;
unsigned short var_8 = (unsigned short)5360;
int zero = 0;
int var_10 = -351672478;
int var_11 = -379606065;
unsigned long long int var_12 = 1889087724784103092ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
