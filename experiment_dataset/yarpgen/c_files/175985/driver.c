#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19367;
unsigned char var_1 = (unsigned char)47;
signed char var_2 = (signed char)-35;
long long int var_3 = -5848035593080160675LL;
unsigned char var_4 = (unsigned char)99;
int var_5 = -1864966007;
unsigned long long int var_6 = 1678109098986178704ULL;
unsigned short var_7 = (unsigned short)49290;
unsigned int var_8 = 2612762890U;
unsigned int var_9 = 2268636895U;
int zero = 0;
signed char var_10 = (signed char)-25;
unsigned short var_11 = (unsigned short)41606;
unsigned int var_12 = 1215206053U;
signed char var_13 = (signed char)-1;
unsigned long long int var_14 = 9104465220312982072ULL;
unsigned char var_15 = (unsigned char)0;
unsigned char var_16 = (unsigned char)7;
int var_17 = 1760954077;
unsigned char var_18 = (unsigned char)204;
signed char var_19 = (signed char)67;
short var_20 = (short)20528;
unsigned long long int var_21 = 12448797834901813488ULL;
unsigned int var_22 = 1805578971U;
unsigned long long int var_23 = 12299147269236425547ULL;
long long int var_24 = 4328454542275528887LL;
long long int var_25 = -287894316275234772LL;
signed char var_26 = (signed char)-115;
unsigned long long int var_27 = 14403832728791898969ULL;
short var_28 = (short)-16813;
unsigned long long int var_29 = 13420159996642480743ULL;
signed char var_30 = (signed char)6;
signed char var_31 = (signed char)-19;
long long int var_32 = 3691475913982505070LL;
signed char var_33 = (signed char)41;
short arr_0 [13] ;
signed char arr_1 [13] [13] ;
unsigned long long int arr_4 [18] ;
signed char arr_5 [18] ;
long long int arr_6 [18] ;
unsigned int arr_10 [18] [18] ;
unsigned long long int arr_11 [18] [18] [18] ;
signed char arr_22 [18] [18] ;
_Bool arr_25 [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_12 [18] ;
int arr_15 [18] [18] [18] ;
int arr_16 [18] ;
unsigned long long int arr_28 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-28056;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-58;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 6214903883848796424ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)84 : (signed char)87;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = -657503910445973081LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 2659702023U : 1509246291U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 18397373664736388772ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 4305153964520829875ULL : 12251512171607064635ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 662198746 : -1082060516;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -324901753 : -77035947;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 5640116744419110290ULL : 4641768202401552712ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
