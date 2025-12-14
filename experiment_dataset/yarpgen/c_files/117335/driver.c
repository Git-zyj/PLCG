#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2055207553920323740LL;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3322398504U;
unsigned short var_6 = (unsigned short)51005;
int var_7 = -265138792;
unsigned short var_8 = (unsigned short)60681;
unsigned int var_9 = 3419213235U;
int zero = 0;
long long int var_11 = 2508248697540809192LL;
unsigned long long int var_12 = 833271475332443504ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
