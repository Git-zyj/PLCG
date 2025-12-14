#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -3992145298386231362LL;
int var_3 = 267053969;
unsigned long long int var_5 = 6878281054566424324ULL;
int var_6 = -247794329;
signed char var_10 = (signed char)-1;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)56255;
unsigned int var_18 = 3649934489U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
