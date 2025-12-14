#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3878097181430346659LL;
long long int var_2 = -6029820998299871268LL;
unsigned long long int var_4 = 18219791942920269002ULL;
int var_5 = 841142980;
short var_6 = (short)-29710;
int var_7 = -1495246823;
unsigned long long int var_10 = 8404854772068727045ULL;
int zero = 0;
short var_12 = (short)32063;
int var_13 = -427411197;
unsigned int var_14 = 2793855066U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)110;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
