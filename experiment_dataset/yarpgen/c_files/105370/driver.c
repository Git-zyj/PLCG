#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3065801990U;
long long int var_3 = 4731867459743703001LL;
unsigned short var_4 = (unsigned short)23758;
unsigned long long int var_7 = 2846715590686055113ULL;
unsigned long long int var_8 = 16945985591477993126ULL;
unsigned short var_9 = (unsigned short)8390;
int zero = 0;
unsigned long long int var_10 = 3963307050171145815ULL;
unsigned int var_11 = 3899286658U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 17897506107098578656ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
