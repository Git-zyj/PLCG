#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-97;
signed char var_1 = (signed char)-43;
signed char var_2 = (signed char)16;
int var_3 = 961470130;
signed char var_5 = (signed char)-46;
unsigned short var_6 = (unsigned short)46519;
_Bool var_10 = (_Bool)0;
short var_12 = (short)16092;
unsigned long long int var_13 = 8872635429694089276ULL;
int var_14 = -1721012697;
int zero = 0;
signed char var_20 = (signed char)-98;
signed char var_21 = (signed char)-20;
unsigned long long int var_22 = 16558979027503805162ULL;
int var_23 = 2012864468;
short var_24 = (short)-22717;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
