#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
unsigned int var_1 = 3499317568U;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)249;
long long int var_5 = -1894921264991832001LL;
unsigned char var_7 = (unsigned char)214;
int var_9 = -160186743;
int zero = 0;
unsigned long long int var_10 = 2092044455555791105ULL;
int var_11 = 827055151;
short var_12 = (short)-17657;
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
