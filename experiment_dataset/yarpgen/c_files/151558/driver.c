#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1843113543U;
unsigned long long int var_5 = 17744279645059729056ULL;
unsigned short var_6 = (unsigned short)580;
unsigned char var_7 = (unsigned char)165;
long long int var_9 = 8886091104256340834LL;
int zero = 0;
signed char var_11 = (signed char)-69;
short var_12 = (short)-5118;
signed char var_13 = (signed char)-39;
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
