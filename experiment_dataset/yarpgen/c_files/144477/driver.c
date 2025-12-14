#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7500667242297413843LL;
unsigned char var_2 = (unsigned char)246;
unsigned int var_3 = 1378907838U;
long long int var_5 = -2253613364144464486LL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)3549;
unsigned int var_15 = 4262157545U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
