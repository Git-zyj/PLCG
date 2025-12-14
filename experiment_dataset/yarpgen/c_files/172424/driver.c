#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2042485389364101618LL;
unsigned long long int var_2 = 9649441341157435860ULL;
unsigned int var_3 = 2864380552U;
long long int var_5 = 4920161721817288270LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)80;
long long int var_8 = 5016534350202850441LL;
signed char var_9 = (signed char)104;
_Bool var_10 = (_Bool)0;
long long int var_12 = 4489885983759633717LL;
int zero = 0;
long long int var_13 = 4529063463509334169LL;
unsigned char var_14 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
