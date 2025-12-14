#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1513013186U;
unsigned int var_2 = 3419856250U;
unsigned int var_4 = 3109278505U;
_Bool var_5 = (_Bool)1;
long long int var_6 = -6860961463339212457LL;
long long int var_7 = 8898391203679230672LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)20108;
long long int var_10 = -6034599928815278616LL;
long long int var_11 = 2285853559727791448LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2484299346023067166LL;
_Bool var_15 = (_Bool)1;
long long int var_17 = 7517441963600958612LL;
long long int var_18 = 6987354163975208136LL;
int zero = 0;
long long int var_19 = 5941608391488719708LL;
long long int var_20 = 8876149364601591175LL;
unsigned int var_21 = 4045770729U;
long long int var_22 = 1480217834231708560LL;
short var_23 = (short)24685;
unsigned int var_24 = 2461844351U;
long long int var_25 = -1057053694527641243LL;
unsigned int var_26 = 920024319U;
long long int var_27 = 6547653043997380119LL;
short var_28 = (short)-4724;
unsigned int var_29 = 840482271U;
long long int var_30 = -5661010336118218052LL;
long long int var_31 = -8930181819687294270LL;
long long int var_32 = 3926566335515161705LL;
long long int var_33 = -4754227270240576039LL;
short var_34 = (short)902;
long long int var_35 = -3042900432219453684LL;
long long int var_36 = 6492224450890528749LL;
long long int var_37 = -5122216214367886307LL;
long long int var_38 = -1357613266604515627LL;
long long int var_39 = -1712197541896638375LL;
_Bool var_40 = (_Bool)0;
long long int var_41 = -2244691551260984755LL;
long long int arr_0 [22] ;
short arr_3 [22] [22] [22] ;
_Bool arr_8 [22] [22] [22] [22] ;
long long int arr_10 [22] [22] [22] [22] ;
short arr_15 [22] [22] [22] [22] ;
unsigned int arr_4 [22] [22] ;
long long int arr_12 [22] [22] [22] [22] [22] [22] ;
long long int arr_23 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -6124889759370939317LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)1543 : (short)-26680;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -7734172489701899019LL : -3615351012015761260LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (short)12886;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 373680087U : 3191871349U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 6645854207344614132LL : -3484233241033257234LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = 3019823718240294065LL;
}

void checksum() {
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
