#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5925475091045930550LL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)106;
unsigned int var_8 = 4255359324U;
unsigned int var_9 = 3220746465U;
signed char var_10 = (signed char)2;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 9365462648624844355ULL;
unsigned int var_17 = 86750772U;
unsigned int var_19 = 3519795202U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 7990456640020993071ULL;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)57;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
