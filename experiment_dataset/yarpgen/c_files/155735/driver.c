#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3643793974833614378LL;
long long int var_1 = -5208239724987399590LL;
unsigned short var_2 = (unsigned short)12643;
unsigned short var_3 = (unsigned short)32554;
unsigned short var_5 = (unsigned short)60670;
unsigned short var_6 = (unsigned short)23382;
unsigned short var_9 = (unsigned short)32465;
unsigned short var_10 = (unsigned short)19407;
long long int var_13 = -7119559534769777847LL;
int zero = 0;
long long int var_15 = -6508152203835920843LL;
long long int var_16 = -4858160471550447047LL;
unsigned short var_17 = (unsigned short)39927;
long long int var_18 = -2921707628163103305LL;
unsigned short var_19 = (unsigned short)14365;
long long int var_20 = 1940442859877387256LL;
long long int var_21 = -5900724073244626554LL;
unsigned short var_22 = (unsigned short)20778;
long long int var_23 = 3865663335025677206LL;
unsigned short var_24 = (unsigned short)40259;
unsigned short var_25 = (unsigned short)24568;
long long int var_26 = 6796943592465187388LL;
unsigned short var_27 = (unsigned short)41474;
unsigned short arr_0 [17] ;
long long int arr_1 [17] [17] ;
unsigned short arr_2 [17] [17] ;
long long int arr_8 [17] [17] ;
unsigned short arr_9 [17] [17] ;
unsigned short arr_10 [17] ;
unsigned short arr_17 [17] ;
long long int arr_3 [17] ;
unsigned short arr_15 [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4781 : (unsigned short)57306;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -3687206402782655509LL : 3740603051452770283LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)25650;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 4480391702855977380LL : -2212552082615396545LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)29553;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned short)2176;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63718 : (unsigned short)5430;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -374476141051731806LL : -2849068715337829994LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned short)59826 : (unsigned short)59795;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
