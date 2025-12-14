#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
unsigned int var_2 = 2911357308U;
int var_7 = 728360549;
unsigned char var_8 = (unsigned char)93;
unsigned char var_10 = (unsigned char)106;
short var_12 = (short)-3447;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2855531636U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
