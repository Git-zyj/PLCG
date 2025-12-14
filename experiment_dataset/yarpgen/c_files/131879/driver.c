#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1273167955;
int var_3 = 1765057191;
int var_4 = 1630663672;
unsigned char var_6 = (unsigned char)217;
unsigned short var_9 = (unsigned short)11111;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)168;
int zero = 0;
signed char var_13 = (signed char)78;
int var_14 = -1605513229;
void init() {
}

void checksum() {
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
