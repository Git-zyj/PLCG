#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
unsigned long long int var_1 = 16959667913776911259ULL;
unsigned char var_3 = (unsigned char)136;
long long int var_4 = 7786412693257463391LL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)17004;
short var_7 = (short)-16085;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)24;
unsigned long long int var_10 = 3806805592569777707ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 2726654964029494549ULL;
short var_15 = (short)2222;
int var_16 = 990041383;
unsigned int var_17 = 251802401U;
unsigned int var_18 = 4035976933U;
int zero = 0;
unsigned short var_19 = (unsigned short)22031;
unsigned long long int var_20 = 13654023820235587129ULL;
short var_21 = (short)-3904;
unsigned short var_22 = (unsigned short)21603;
long long int var_23 = -1321513389882490217LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
