#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3018738036620988741LL;
long long int var_1 = -6894749730300776848LL;
int var_2 = 222967441;
long long int var_5 = -5384312510023467974LL;
unsigned int var_11 = 3093210467U;
int zero = 0;
signed char var_13 = (signed char)102;
signed char var_14 = (signed char)55;
unsigned short var_15 = (unsigned short)8773;
unsigned short var_16 = (unsigned short)24193;
void init() {
}

void checksum() {
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
