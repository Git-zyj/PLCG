#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = -1140614806;
signed char var_7 = (signed char)-107;
unsigned int var_9 = 3138123625U;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)122;
long long int var_15 = -5999018233190245946LL;
int zero = 0;
unsigned long long int var_18 = 17502021598688016464ULL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4242914319U;
long long int var_21 = -8685663382734292964LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
