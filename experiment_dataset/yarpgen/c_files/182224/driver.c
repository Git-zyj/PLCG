#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8054136759476476884LL;
unsigned char var_1 = (unsigned char)61;
int var_2 = -1050152880;
long long int var_3 = -747482763405208752LL;
int var_4 = 1815971362;
int var_5 = 980339436;
long long int var_6 = -5518607580998029922LL;
long long int var_7 = -1675142988445267257LL;
unsigned char var_8 = (unsigned char)175;
long long int var_9 = 1921383253930485116LL;
int var_10 = -1304176475;
int zero = 0;
int var_11 = -484911639;
long long int var_12 = -3118817203582482909LL;
unsigned char var_13 = (unsigned char)18;
long long int var_14 = 4138222251181112729LL;
int var_15 = 1151083466;
long long int var_16 = -4612138158260936182LL;
unsigned char var_17 = (unsigned char)47;
unsigned char arr_2 [25] ;
unsigned char arr_6 [25] ;
long long int arr_7 [25] ;
unsigned char arr_8 [25] ;
unsigned char arr_11 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)26 : (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)55 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3065940223687527485LL : 8221346855420886018LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)86 : (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)81 : (unsigned char)87;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
