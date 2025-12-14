#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6353620409073502817LL;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)43;
unsigned char var_12 = (unsigned char)146;
long long int var_17 = 2323548209717637374LL;
int zero = 0;
unsigned long long int var_20 = 4606568167733551339ULL;
signed char var_21 = (signed char)-110;
void init() {
}

void checksum() {
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
