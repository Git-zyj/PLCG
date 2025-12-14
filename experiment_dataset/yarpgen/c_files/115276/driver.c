#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11871412478749764300ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 11326656425182279214ULL;
unsigned short var_3 = (unsigned short)39442;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-105;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)24;
short var_8 = (short)17162;
short var_9 = (short)-31719;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-127;
unsigned char var_12 = (unsigned char)7;
unsigned int var_13 = 1088240906U;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-10;
unsigned short var_18 = (unsigned short)49153;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3202833789U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
