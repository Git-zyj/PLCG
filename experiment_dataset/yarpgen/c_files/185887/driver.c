#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned int var_1 = 903834515U;
signed char var_2 = (signed char)10;
unsigned short var_3 = (unsigned short)45467;
_Bool var_4 = (_Bool)1;
short var_9 = (short)-21290;
signed char var_10 = (signed char)37;
unsigned long long int var_11 = 13964124275394410138ULL;
unsigned char var_12 = (unsigned char)29;
int zero = 0;
unsigned char var_13 = (unsigned char)98;
unsigned char var_14 = (unsigned char)167;
signed char var_15 = (signed char)43;
unsigned int var_16 = 3844720412U;
long long int var_17 = -7363702812898484788LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
