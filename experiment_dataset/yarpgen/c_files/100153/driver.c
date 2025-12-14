#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_5 = -6583695218213436879LL;
unsigned char var_6 = (unsigned char)158;
int var_7 = 445406044;
int var_9 = -689736255;
unsigned int var_10 = 3693435027U;
int zero = 0;
_Bool var_11 = (_Bool)1;
int var_12 = 625367199;
_Bool var_13 = (_Bool)1;
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
