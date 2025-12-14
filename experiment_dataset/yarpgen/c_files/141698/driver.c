#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
unsigned char var_1 = (unsigned char)122;
unsigned long long int var_2 = 10784548417500999930ULL;
unsigned long long int var_3 = 7393215838616441448ULL;
signed char var_4 = (signed char)122;
unsigned char var_5 = (unsigned char)60;
long long int var_6 = 4936840977364585294LL;
unsigned long long int var_7 = 17490150076249786253ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)221;
int var_10 = -983583791;
unsigned long long int var_11 = 8118580786739977159ULL;
unsigned long long int var_12 = 12110961894560348013ULL;
unsigned long long int var_13 = 12741169453130246708ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2503021756674666798LL;
int zero = 0;
signed char var_16 = (signed char)-108;
long long int var_17 = -1982502905947391923LL;
short var_18 = (short)2833;
unsigned char var_19 = (unsigned char)234;
signed char var_20 = (signed char)-110;
unsigned long long int var_21 = 17601946594371024084ULL;
signed char var_22 = (signed char)78;
long long int arr_0 [17] ;
unsigned short arr_1 [17] ;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1456694816003466064LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)23473;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -8315808862631499251LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
