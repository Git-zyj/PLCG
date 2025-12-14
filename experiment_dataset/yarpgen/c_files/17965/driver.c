#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)127;
unsigned long long int var_6 = 5292474274179155175ULL;
unsigned long long int var_7 = 6285245188492842106ULL;
long long int var_8 = -6182148384724573978LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1358442249U;
int var_20 = -2080943080;
int var_21 = 1165902299;
int var_22 = -868774902;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
