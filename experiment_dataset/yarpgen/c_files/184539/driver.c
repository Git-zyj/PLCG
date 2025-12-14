#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7249561725533803081ULL;
unsigned short var_2 = (unsigned short)39377;
_Bool var_6 = (_Bool)1;
short var_11 = (short)1684;
long long int var_17 = -2965775863942335616LL;
int zero = 0;
unsigned int var_19 = 4168539616U;
unsigned long long int var_20 = 13832246299876860765ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
