#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1008664818;
unsigned long long int var_2 = 15183171236254044442ULL;
short var_3 = (short)-2491;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)4;
long long int var_7 = -7356288901455655075LL;
signed char var_8 = (signed char)82;
unsigned char var_9 = (unsigned char)217;
unsigned int var_10 = 3063274936U;
int var_11 = -81929734;
unsigned int var_13 = 611392520U;
long long int var_14 = -942595911790382399LL;
short var_15 = (short)13285;
int zero = 0;
unsigned int var_16 = 323068028U;
signed char var_17 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
