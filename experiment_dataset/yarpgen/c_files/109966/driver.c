#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 830572404;
long long int var_1 = 3451959161136567708LL;
signed char var_2 = (signed char)-21;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 7827557463833126507ULL;
long long int var_8 = 8258075985246270045LL;
unsigned long long int var_9 = 5700976866218408644ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)11084;
unsigned long long int var_13 = 16437900198188517508ULL;
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
