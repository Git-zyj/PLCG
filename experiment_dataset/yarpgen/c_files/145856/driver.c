#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -442945322;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)37;
signed char var_7 = (signed char)20;
signed char var_10 = (signed char)-50;
unsigned int var_11 = 2789840376U;
unsigned char var_12 = (unsigned char)114;
int var_13 = -98177737;
int zero = 0;
int var_16 = 1561679420;
signed char var_17 = (signed char)-90;
signed char var_18 = (signed char)1;
signed char var_19 = (signed char)95;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
