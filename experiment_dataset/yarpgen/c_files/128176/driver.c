#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)74;
unsigned short var_8 = (unsigned short)56540;
signed char var_11 = (signed char)-25;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)1348;
int zero = 0;
unsigned short var_19 = (unsigned short)32920;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)12665;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
