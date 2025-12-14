#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
int var_2 = 1669578893;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 11922259190670787140ULL;
int var_7 = -1785091032;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)-18;
int var_11 = -376550900;
int var_12 = 565649875;
unsigned char var_13 = (unsigned char)218;
int zero = 0;
unsigned int var_14 = 1644306117U;
signed char var_15 = (signed char)4;
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
