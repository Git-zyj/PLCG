#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11148763833058297914ULL;
unsigned long long int var_3 = 13677164875027383805ULL;
unsigned short var_5 = (unsigned short)64200;
unsigned int var_6 = 3454126298U;
signed char var_8 = (signed char)-104;
unsigned long long int var_9 = 17495075229490877249ULL;
int zero = 0;
short var_12 = (short)22837;
unsigned char var_13 = (unsigned char)246;
unsigned char var_14 = (unsigned char)49;
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
