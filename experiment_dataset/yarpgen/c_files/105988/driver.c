#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5385122203655227679LL;
unsigned char var_8 = (unsigned char)141;
_Bool var_9 = (_Bool)1;
short var_10 = (short)13489;
_Bool var_11 = (_Bool)1;
long long int var_17 = -6727069216197371922LL;
int zero = 0;
unsigned char var_20 = (unsigned char)49;
unsigned long long int var_21 = 16736185953038382660ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
