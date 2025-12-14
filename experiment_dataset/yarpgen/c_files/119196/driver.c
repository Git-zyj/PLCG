#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)13;
long long int var_2 = 339434044251822047LL;
long long int var_3 = 3249298487157411210LL;
unsigned long long int var_4 = 7184978803964612152ULL;
unsigned long long int var_5 = 4989559737213854399ULL;
unsigned short var_6 = (unsigned short)3045;
signed char var_7 = (signed char)-126;
unsigned short var_8 = (unsigned short)53071;
signed char var_9 = (signed char)-110;
long long int var_10 = -5351861919763286995LL;
unsigned long long int var_11 = 9455828553495933933ULL;
long long int var_12 = -3928702304104277238LL;
long long int var_17 = -5803615964146988464LL;
long long int var_18 = -6444994719879316486LL;
long long int var_19 = 6395299660361362226LL;
int zero = 0;
short var_20 = (short)18328;
short var_21 = (short)-30615;
long long int var_22 = 9175654151720830843LL;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-5421;
short var_25 = (short)15533;
unsigned long long int var_26 = 6932384051095398650ULL;
unsigned int var_27 = 107694306U;
unsigned short var_28 = (unsigned short)2708;
_Bool var_29 = (_Bool)0;
long long int arr_2 [24] ;
short arr_3 [24] ;
short arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 7014761036810497523LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-18845;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)19133 : (short)-31751;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
