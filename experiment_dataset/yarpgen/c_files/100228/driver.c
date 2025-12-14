#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1060183727;
_Bool var_8 = (_Bool)1;
unsigned char var_11 = (unsigned char)199;
unsigned char var_12 = (unsigned char)204;
long long int var_14 = -8469378203808357015LL;
int zero = 0;
signed char var_17 = (signed char)18;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 5979545073500834260ULL;
unsigned char var_20 = (unsigned char)224;
unsigned char var_21 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
