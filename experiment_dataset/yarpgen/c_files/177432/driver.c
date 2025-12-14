#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14788036782016416452ULL;
unsigned char var_4 = (unsigned char)36;
unsigned int var_9 = 264315274U;
int var_10 = -2051623554;
long long int var_12 = -7843629599468126585LL;
int var_14 = -1390686774;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)24;
unsigned long long int var_20 = 12596236370416918993ULL;
long long int var_21 = -6997167727807540075LL;
int var_22 = -1212187768;
int var_23 = -1849507509;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
