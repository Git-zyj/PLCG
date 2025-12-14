#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11507;
long long int var_3 = -2546089610114281085LL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2416186809U;
long long int var_10 = -2915113802191549056LL;
int zero = 0;
long long int var_11 = -4910377266816113182LL;
unsigned char var_12 = (unsigned char)140;
long long int var_13 = 4407714027017917106LL;
void init() {
}

void checksum() {
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
