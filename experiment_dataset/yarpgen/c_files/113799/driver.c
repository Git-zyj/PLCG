#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)87;
long long int var_6 = -5740370079366896766LL;
unsigned int var_7 = 3627095395U;
unsigned char var_11 = (unsigned char)172;
unsigned short var_13 = (unsigned short)26910;
signed char var_14 = (signed char)90;
unsigned short var_15 = (unsigned short)56715;
unsigned short var_17 = (unsigned short)26158;
int zero = 0;
int var_20 = 1685320135;
long long int var_21 = 5855199670044489659LL;
long long int var_22 = -7266032895999495440LL;
signed char var_23 = (signed char)60;
long long int arr_2 [16] ;
long long int arr_4 [20] ;
unsigned long long int arr_5 [20] ;
short arr_6 [20] [20] ;
unsigned int arr_10 [15] [15] ;
unsigned long long int arr_13 [19] ;
long long int arr_14 [19] [19] [19] ;
unsigned short arr_15 [19] [19] ;
long long int arr_16 [19] [19] [19] ;
unsigned int arr_3 [16] [16] ;
signed char arr_7 [20] [20] ;
unsigned char arr_11 [15] ;
unsigned long long int arr_19 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 5809680389651621180LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = -5010737228765138054LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 13228641490704666489ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-8725;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 1870379825U : 1532999333U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = 3563595073998800434ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -7079809320802612561LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)52294;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -4040296888772857734LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3800587469U : 2727039318U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)221 : (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = 5874094885349236612ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
