#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 418255471U;
unsigned int var_4 = 1108533394U;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)103;
unsigned char var_11 = (unsigned char)251;
unsigned char var_13 = (unsigned char)49;
int zero = 0;
long long int var_15 = 5742182378229311743LL;
unsigned long long int var_16 = 9762195024138060051ULL;
unsigned long long int var_17 = 12766539190933297951ULL;
long long int var_18 = -5395824598046268366LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
