#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
signed char var_2 = (signed char)27;
signed char var_3 = (signed char)-26;
unsigned long long int var_4 = 9813200810850191568ULL;
unsigned long long int var_5 = 13625094110316099593ULL;
unsigned long long int var_6 = 2341742682928858313ULL;
signed char var_7 = (signed char)-26;
unsigned long long int var_10 = 1079699398405389486ULL;
unsigned long long int var_12 = 13100704282047206113ULL;
signed char var_13 = (signed char)56;
int zero = 0;
signed char var_14 = (signed char)-126;
signed char var_15 = (signed char)-120;
unsigned long long int var_16 = 4406715965858172284ULL;
signed char var_17 = (signed char)-17;
unsigned long long int var_18 = 7887612848291619871ULL;
signed char var_19 = (signed char)-36;
signed char var_20 = (signed char)-6;
signed char var_21 = (signed char)24;
unsigned long long int var_22 = 2735543230913685987ULL;
signed char var_23 = (signed char)31;
unsigned long long int var_24 = 382216772678356358ULL;
unsigned long long int arr_0 [24] ;
signed char arr_1 [24] ;
signed char arr_3 [24] ;
unsigned long long int arr_5 [24] [24] ;
unsigned long long int arr_7 [24] [24] [24] [24] ;
signed char arr_9 [20] ;
unsigned long long int arr_10 [20] ;
signed char arr_2 [24] ;
unsigned long long int arr_8 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 18176736647596228862ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 10806002213089275579ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 14031712956583787211ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 4334570715246250098ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 12525015132142709886ULL : 16140779074142320070ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
