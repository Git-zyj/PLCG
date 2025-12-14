#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6258256335812179400LL;
short var_1 = (short)-16760;
int var_2 = -1848381537;
long long int var_3 = -1534455262524277890LL;
unsigned int var_4 = 4110123185U;
short var_5 = (short)-255;
unsigned short var_6 = (unsigned short)12946;
unsigned short var_7 = (unsigned short)7404;
short var_8 = (short)23494;
unsigned char var_9 = (unsigned char)144;
int var_10 = -480939550;
long long int var_12 = -1103120932172011676LL;
unsigned int var_13 = 1895587155U;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-50;
short var_17 = (short)22948;
short var_18 = (short)7844;
unsigned long long int var_19 = 1141922289516496181ULL;
signed char var_20 = (signed char)-105;
signed char arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)62;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
