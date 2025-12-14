#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14491062069202136520ULL;
unsigned int var_1 = 1839896158U;
short var_2 = (short)-30471;
_Bool var_4 = (_Bool)0;
int var_5 = 438169415;
unsigned char var_6 = (unsigned char)180;
unsigned int var_7 = 1372684033U;
unsigned char var_8 = (unsigned char)168;
short var_13 = (short)-17933;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)29;
void init() {
}

void checksum() {
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
