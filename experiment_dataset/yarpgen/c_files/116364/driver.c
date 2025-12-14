#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 522549700U;
int var_3 = 1806278109;
long long int var_6 = -198061113933482831LL;
int var_12 = -343769568;
short var_13 = (short)-231;
unsigned int var_16 = 980028981U;
int zero = 0;
short var_20 = (short)-27872;
unsigned short var_21 = (unsigned short)15474;
short var_22 = (short)-31655;
unsigned char var_23 = (unsigned char)9;
unsigned char var_24 = (unsigned char)26;
unsigned long long int var_25 = 10720116745946893864ULL;
unsigned long long int var_26 = 13387467465625093180ULL;
unsigned short var_27 = (unsigned short)21936;
short var_28 = (short)-17282;
unsigned int var_29 = 1195958935U;
unsigned char var_30 = (unsigned char)11;
unsigned char var_31 = (unsigned char)181;
unsigned char arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
unsigned long long int arr_8 [24] [24] [24] ;
signed char arr_10 [24] [24] [24] ;
unsigned int arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 4018679912U : 3824796435U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13719611426949026087ULL : 13356618014337106080ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 2902915907U : 4110837833U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
