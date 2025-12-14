#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)108;
_Bool var_2 = (_Bool)1;
short var_6 = (short)22985;
unsigned char var_8 = (unsigned char)141;
long long int var_11 = 8476688593538259710LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 7391778585395190117ULL;
signed char var_14 = (signed char)97;
short var_15 = (short)-3470;
signed char var_16 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
