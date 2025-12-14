#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1641728229283305308LL;
_Bool var_7 = (_Bool)0;
long long int var_14 = -5350315081881221896LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 3004456817U;
long long int var_19 = 2772771503620810143LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
