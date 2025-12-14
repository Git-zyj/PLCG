#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
unsigned short var_3 = (unsigned short)52662;
int var_5 = 1796015439;
int var_6 = -1382673425;
long long int var_7 = -491510186264003380LL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1062769076U;
_Bool var_11 = (_Bool)0;
int var_12 = -749714255;
unsigned int var_14 = 791233595U;
_Bool var_15 = (_Bool)0;
int var_16 = 1610292739;
int var_17 = -1867703441;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1966755130U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)243;
unsigned char var_22 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
