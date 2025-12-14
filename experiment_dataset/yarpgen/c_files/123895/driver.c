#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4125356436630775491LL;
unsigned int var_1 = 1704778527U;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)119;
int var_8 = -1566399203;
int zero = 0;
unsigned long long int var_10 = 5679962822641672144ULL;
unsigned long long int var_11 = 18373950779265728890ULL;
signed char var_12 = (signed char)106;
unsigned short var_13 = (unsigned short)3370;
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
