#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 9407591407759621124ULL;
long long int var_8 = 5043011098197441282LL;
unsigned short var_9 = (unsigned short)60446;
unsigned short var_11 = (unsigned short)53820;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2625449390U;
void init() {
}

void checksum() {
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
