#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2758523316U;
long long int var_2 = 5259136016796912166LL;
int var_6 = 1744183118;
unsigned long long int var_9 = 14920871862338623884ULL;
int var_10 = 1323379684;
int var_11 = -146021453;
int zero = 0;
unsigned char var_12 = (unsigned char)142;
int var_13 = -986008922;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
