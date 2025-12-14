#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8650;
unsigned long long int var_1 = 6618242890685773854ULL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)5854;
short var_4 = (short)23689;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)179;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-2779;
unsigned int var_9 = 2183771245U;
long long int var_10 = 7366380602505318770LL;
unsigned int var_11 = 2614425994U;
short var_12 = (short)-8003;
int zero = 0;
signed char var_13 = (signed char)-93;
unsigned char var_14 = (unsigned char)49;
short var_15 = (short)-12198;
unsigned long long int var_16 = 18288727287953236866ULL;
unsigned short var_17 = (unsigned short)13214;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 6484218946707761632LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
