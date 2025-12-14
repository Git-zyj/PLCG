#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)43;
signed char var_3 = (signed char)-69;
long long int var_4 = 7364473306413328329LL;
unsigned int var_6 = 2949153345U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)89;
short var_9 = (short)-20346;
long long int var_10 = -8065514539912978434LL;
unsigned int var_12 = 2770861198U;
int zero = 0;
unsigned char var_13 = (unsigned char)226;
long long int var_14 = 9028970012131423064LL;
short var_15 = (short)-998;
_Bool var_16 = (_Bool)1;
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
