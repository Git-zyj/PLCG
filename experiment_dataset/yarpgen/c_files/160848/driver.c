#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3684300346391194908ULL;
unsigned long long int var_1 = 2361299498681967413ULL;
unsigned long long int var_4 = 13747276004531756389ULL;
unsigned char var_5 = (unsigned char)184;
unsigned int var_7 = 3867965406U;
unsigned long long int var_9 = 8899455243436722702ULL;
int zero = 0;
signed char var_10 = (signed char)30;
long long int var_11 = -3311947665496833470LL;
unsigned long long int var_12 = 2269508262026843867ULL;
unsigned long long int var_13 = 4998071157736599163ULL;
unsigned short var_14 = (unsigned short)28955;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
