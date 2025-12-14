#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15752384749293479456ULL;
signed char var_1 = (signed char)-42;
signed char var_2 = (signed char)-34;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 830906514U;
unsigned long long int var_6 = 5638573166138206617ULL;
unsigned char var_8 = (unsigned char)195;
unsigned long long int var_9 = 4214862485085042337ULL;
signed char var_13 = (signed char)-39;
int zero = 0;
unsigned long long int var_14 = 13796536035781431810ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-29907;
long long int var_17 = 8740938109929365456LL;
signed char var_18 = (signed char)87;
signed char var_19 = (signed char)-118;
unsigned char arr_3 [22] [22] ;
long long int arr_12 [22] ;
unsigned long long int arr_7 [22] ;
_Bool arr_8 [22] ;
unsigned char arr_14 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 2037593445948375884LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 3135021424488239528ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)138;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
