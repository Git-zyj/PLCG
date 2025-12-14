#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
int var_2 = -1691423654;
_Bool var_3 = (_Bool)0;
int var_10 = -1004550980;
int zero = 0;
unsigned char var_12 = (unsigned char)158;
signed char var_13 = (signed char)-22;
unsigned short var_14 = (unsigned short)41189;
void init() {
}

void checksum() {
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
