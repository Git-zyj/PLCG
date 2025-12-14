#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 326412228;
long long int var_1 = 832415587274188389LL;
short var_2 = (short)26752;
unsigned int var_3 = 4081815944U;
unsigned char var_4 = (unsigned char)151;
long long int var_5 = 5944182832314696524LL;
int var_7 = -655884231;
unsigned short var_8 = (unsigned short)57575;
unsigned int var_9 = 1915167761U;
short var_10 = (short)-18386;
int zero = 0;
signed char var_11 = (signed char)87;
int var_12 = 391538485;
int var_13 = 1269814249;
int var_14 = -479442232;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
