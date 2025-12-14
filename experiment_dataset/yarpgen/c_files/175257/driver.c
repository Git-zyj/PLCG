#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1929539996U;
unsigned long long int var_1 = 13923331225617610580ULL;
int var_2 = 390630891;
unsigned long long int var_3 = 15289294871006675009ULL;
int var_5 = -1890334624;
unsigned int var_6 = 2709244155U;
short var_7 = (short)-15287;
long long int var_9 = -6808129223712292240LL;
unsigned long long int var_10 = 11644814278996386326ULL;
unsigned long long int var_11 = 14064000345436499309ULL;
short var_12 = (short)-9054;
short var_15 = (short)-14829;
int zero = 0;
int var_16 = -383642637;
unsigned long long int var_17 = 11815553879832964006ULL;
short var_18 = (short)4692;
signed char var_19 = (signed char)-82;
short var_20 = (short)-3974;
unsigned int var_21 = 1309844426U;
unsigned short var_22 = (unsigned short)27037;
short var_23 = (short)13553;
signed char var_24 = (signed char)64;
short var_25 = (short)-8380;
unsigned short var_26 = (unsigned short)18710;
short var_27 = (short)-15576;
unsigned long long int var_28 = 2170420793561974046ULL;
unsigned long long int var_29 = 1697804727171895053ULL;
unsigned short var_30 = (unsigned short)41675;
unsigned short var_31 = (unsigned short)47698;
short arr_0 [22] [22] ;
short arr_1 [22] ;
unsigned int arr_2 [22] ;
signed char arr_3 [22] [22] ;
unsigned long long int arr_5 [22] ;
int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)4027;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)14056;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 4194517529U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)17;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 12639335437314566871ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 1692895932;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
