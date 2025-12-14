#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17658690397964729162ULL;
unsigned long long int var_1 = 10157546214362193677ULL;
unsigned long long int var_2 = 8225992938540151901ULL;
signed char var_3 = (signed char)-71;
unsigned char var_4 = (unsigned char)56;
unsigned long long int var_5 = 6597970694421496791ULL;
unsigned char var_6 = (unsigned char)130;
long long int var_8 = -7732627452026347316LL;
int var_9 = 20388339;
unsigned char var_10 = (unsigned char)93;
signed char var_11 = (signed char)121;
unsigned int var_12 = 924801312U;
int zero = 0;
signed char var_13 = (signed char)-80;
unsigned char var_14 = (unsigned char)45;
unsigned int var_15 = 470706717U;
signed char var_16 = (signed char)-123;
unsigned char var_17 = (unsigned char)236;
unsigned char var_18 = (unsigned char)132;
unsigned int var_19 = 354637574U;
unsigned int var_20 = 369339322U;
unsigned int var_21 = 4111570919U;
unsigned char var_22 = (unsigned char)52;
long long int var_23 = 4281276359276300291LL;
unsigned int var_24 = 356674526U;
unsigned long long int var_25 = 453867476014037382ULL;
unsigned char var_26 = (unsigned char)210;
short var_27 = (short)24122;
short var_28 = (short)17636;
unsigned char arr_13 [15] ;
long long int arr_16 [15] [15] [15] ;
unsigned int arr_28 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned char)63 : (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 3497228445839983823LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 2382538832U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
