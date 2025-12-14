#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21101;
unsigned short var_2 = (unsigned short)38298;
unsigned int var_3 = 2150411021U;
long long int var_4 = 3874429564158307117LL;
signed char var_5 = (signed char)2;
unsigned long long int var_7 = 4333924536871640330ULL;
unsigned char var_8 = (unsigned char)128;
long long int var_9 = -1305320789430330602LL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)62198;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -5218678643775728051LL;
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
