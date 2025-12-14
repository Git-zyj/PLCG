#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3490908998116309231LL;
int var_1 = 1739008117;
signed char var_3 = (signed char)-71;
short var_6 = (short)-32283;
unsigned long long int var_12 = 3469070545846941045ULL;
unsigned char var_13 = (unsigned char)177;
unsigned int var_14 = 646152045U;
int zero = 0;
long long int var_17 = -3774380782988267031LL;
unsigned int var_18 = 1284388083U;
unsigned long long int var_19 = 841366833973986425ULL;
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
