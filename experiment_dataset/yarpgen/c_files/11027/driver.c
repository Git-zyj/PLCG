#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51289;
unsigned int var_4 = 2892817922U;
unsigned short var_6 = (unsigned short)31443;
long long int var_9 = 5843999119803178929LL;
int zero = 0;
long long int var_19 = 2812651890713885135LL;
unsigned int var_20 = 3845491173U;
unsigned char var_21 = (unsigned char)247;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
