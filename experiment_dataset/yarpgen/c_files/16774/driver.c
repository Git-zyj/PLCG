#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 244391614U;
short var_1 = (short)-29242;
unsigned char var_4 = (unsigned char)60;
unsigned short var_5 = (unsigned short)40065;
long long int var_9 = -8060539040451748694LL;
int zero = 0;
long long int var_16 = 3892377371822749851LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -8643851401162223690LL;
int var_19 = 1994317885;
unsigned char var_20 = (unsigned char)98;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
