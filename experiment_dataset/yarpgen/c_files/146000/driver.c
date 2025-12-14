#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)44;
int var_1 = -61580844;
_Bool var_4 = (_Bool)1;
int var_7 = 144325482;
int var_10 = 1804075391;
signed char var_18 = (signed char)123;
int zero = 0;
signed char var_19 = (signed char)-51;
unsigned char var_20 = (unsigned char)170;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
