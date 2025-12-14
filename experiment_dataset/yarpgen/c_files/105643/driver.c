#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
long long int var_1 = -960233473536155297LL;
unsigned char var_5 = (unsigned char)186;
signed char var_7 = (signed char)69;
short var_8 = (short)10267;
signed char var_10 = (signed char)81;
signed char var_11 = (signed char)51;
long long int var_12 = 8692524799547910082LL;
long long int var_13 = -1878008541806555960LL;
int zero = 0;
signed char var_14 = (signed char)35;
int var_15 = 679591915;
unsigned short var_16 = (unsigned short)64918;
unsigned char var_17 = (unsigned char)40;
long long int var_18 = -6224044097742288295LL;
_Bool var_19 = (_Bool)1;
long long int arr_0 [14] ;
_Bool arr_1 [14] [14] ;
_Bool arr_3 [16] ;
_Bool arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -7390430204151800765LL : 7644682182394297736LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
