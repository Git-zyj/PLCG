#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-70;
unsigned short var_5 = (unsigned short)9625;
unsigned char var_7 = (unsigned char)241;
unsigned char var_8 = (unsigned char)62;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)198;
long long int var_14 = 7085734753211482495LL;
int zero = 0;
unsigned short var_17 = (unsigned short)32726;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
