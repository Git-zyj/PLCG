#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14941;
unsigned int var_1 = 968549739U;
unsigned long long int var_3 = 4697898894907999527ULL;
short var_4 = (short)30677;
unsigned short var_5 = (unsigned short)65112;
short var_8 = (short)25146;
unsigned long long int var_9 = 14850156735291007552ULL;
unsigned long long int var_10 = 10489853222420402057ULL;
unsigned char var_11 = (unsigned char)172;
_Bool var_12 = (_Bool)0;
unsigned long long int var_16 = 7574122557424496639ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)56770;
unsigned long long int var_18 = 13317195179710892896ULL;
signed char var_19 = (signed char)-103;
short var_20 = (short)-16243;
short arr_0 [18] ;
unsigned int arr_1 [18] ;
int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-8581;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3148804631U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -1146006873;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
