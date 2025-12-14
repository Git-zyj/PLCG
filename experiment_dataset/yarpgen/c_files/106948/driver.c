#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -3001234735370099568LL;
unsigned char var_2 = (unsigned char)78;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 4215783419410376194ULL;
unsigned short var_7 = (unsigned short)13280;
unsigned char var_8 = (unsigned char)20;
unsigned char var_11 = (unsigned char)246;
unsigned short var_12 = (unsigned short)43645;
signed char var_13 = (signed char)76;
long long int var_16 = 3857146058643515084LL;
int zero = 0;
unsigned long long int var_19 = 6199285471789901232ULL;
_Bool var_20 = (_Bool)1;
int var_21 = 693389232;
unsigned int var_22 = 2373521369U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
