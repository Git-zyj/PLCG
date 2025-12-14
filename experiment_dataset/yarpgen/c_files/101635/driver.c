#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3673457754983105734LL;
unsigned char var_5 = (unsigned char)159;
unsigned char var_9 = (unsigned char)99;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1983634471U;
unsigned int var_21 = 1265092832U;
long long int var_22 = -1909814236708273739LL;
void init() {
}

void checksum() {
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
