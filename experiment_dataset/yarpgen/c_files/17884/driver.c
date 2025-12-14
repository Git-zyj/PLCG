#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
int var_2 = 1446206270;
unsigned int var_4 = 2741917980U;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 15383608393678666555ULL;
unsigned int var_9 = 3429535790U;
int zero = 0;
int var_11 = 140512162;
signed char var_12 = (signed char)75;
long long int var_13 = 4733103326021755306LL;
void init() {
}

void checksum() {
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
