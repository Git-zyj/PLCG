#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)22275;
_Bool var_9 = (_Bool)1;
long long int var_10 = -7927624072173792561LL;
short var_11 = (short)1559;
int zero = 0;
short var_14 = (short)-10310;
unsigned long long int var_15 = 527582197402370254ULL;
int var_16 = -301431274;
void init() {
}

void checksum() {
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
