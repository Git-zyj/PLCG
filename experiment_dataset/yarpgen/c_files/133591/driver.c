#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14283461473410710675ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)24;
long long int var_6 = 1910416467484453489LL;
long long int var_9 = 702785754794500298LL;
int zero = 0;
int var_11 = 1389899183;
unsigned char var_12 = (unsigned char)241;
_Bool var_13 = (_Bool)1;
long long int var_14 = 826525684599370402LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
