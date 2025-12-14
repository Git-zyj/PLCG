#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -226996956;
signed char var_4 = (signed char)45;
unsigned char var_7 = (unsigned char)66;
unsigned char var_10 = (unsigned char)177;
int var_11 = 1629226301;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 15504673200699666084ULL;
signed char var_21 = (signed char)123;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
