#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)188;
unsigned int var_3 = 3128405375U;
signed char var_4 = (signed char)111;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)8812;
int zero = 0;
int var_13 = 298704823;
unsigned char var_14 = (unsigned char)20;
long long int var_15 = 501807366190438577LL;
long long int var_16 = -4640980195106946132LL;
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
