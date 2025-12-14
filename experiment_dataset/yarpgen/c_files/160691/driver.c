#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1521;
unsigned char var_5 = (unsigned char)8;
unsigned char var_6 = (unsigned char)27;
_Bool var_7 = (_Bool)0;
long long int var_13 = 832170331574550448LL;
int var_14 = -299823967;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2759964913640285314ULL;
unsigned char var_22 = (unsigned char)255;
void init() {
}

void checksum() {
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
