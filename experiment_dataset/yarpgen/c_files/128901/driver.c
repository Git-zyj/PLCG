#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
_Bool var_1 = (_Bool)1;
long long int var_2 = -3628694943889002809LL;
long long int var_4 = -7625586786120569776LL;
int var_5 = -51257272;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 538474504587729718ULL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
