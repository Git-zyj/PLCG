#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1613176635U;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-46;
short var_6 = (short)-21544;
unsigned char var_7 = (unsigned char)162;
short var_10 = (short)5671;
unsigned int var_11 = 1920352492U;
signed char var_12 = (signed char)82;
unsigned short var_13 = (unsigned short)30897;
_Bool var_14 = (_Bool)0;
long long int var_15 = 7920410707567718937LL;
signed char var_17 = (signed char)13;
int zero = 0;
unsigned int var_20 = 2910641211U;
signed char var_21 = (signed char)-51;
short var_22 = (short)18339;
_Bool var_23 = (_Bool)1;
int var_24 = -374327822;
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
