#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52562;
unsigned int var_3 = 1806224254U;
unsigned int var_5 = 2482835272U;
int var_6 = 1604066216;
long long int var_8 = -1390965606528447824LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)34121;
signed char var_12 = (signed char)47;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)60;
signed char var_18 = (signed char)116;
int zero = 0;
unsigned int var_19 = 1107485949U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
