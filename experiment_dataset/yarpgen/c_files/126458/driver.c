#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1202476141;
int var_1 = -608689682;
long long int var_5 = 3090700490997651142LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)2;
unsigned char var_8 = (unsigned char)149;
signed char var_10 = (signed char)10;
int zero = 0;
int var_13 = -1078130001;
_Bool var_14 = (_Bool)1;
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
