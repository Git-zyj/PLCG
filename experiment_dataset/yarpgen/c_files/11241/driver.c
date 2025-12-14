#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned char var_1 = (unsigned char)233;
long long int var_2 = -128830020515481042LL;
unsigned char var_3 = (unsigned char)21;
unsigned short var_4 = (unsigned short)24789;
unsigned char var_5 = (unsigned char)22;
unsigned long long int var_6 = 17811213667831197095ULL;
unsigned short var_7 = (unsigned short)14416;
signed char var_8 = (signed char)-59;
unsigned short var_9 = (unsigned short)4134;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)163;
unsigned char var_12 = (unsigned char)218;
unsigned char var_13 = (unsigned char)21;
unsigned int var_14 = 1665665464U;
long long int var_15 = -5158769206989075532LL;
unsigned long long int var_16 = 13993168537857144382ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 17321806882665547724ULL;
long long int var_19 = 1581555485441569447LL;
int zero = 0;
unsigned int var_20 = 3906144996U;
unsigned char var_21 = (unsigned char)86;
unsigned long long int var_22 = 14873309779811341067ULL;
long long int var_23 = 9062068976132376212LL;
long long int var_24 = -3189459255039876931LL;
unsigned char var_25 = (unsigned char)36;
unsigned long long int var_26 = 1075730181307770933ULL;
unsigned short var_27 = (unsigned short)13073;
signed char var_28 = (signed char)-89;
unsigned long long int var_29 = 6230238408335043376ULL;
unsigned char var_30 = (unsigned char)254;
unsigned long long int var_31 = 9936955178197961748ULL;
unsigned int var_32 = 4021134591U;
short var_33 = (short)28634;
long long int var_34 = -8897967836702569777LL;
unsigned int var_35 = 3218391233U;
unsigned char var_36 = (unsigned char)97;
unsigned short var_37 = (unsigned short)30161;
unsigned char var_38 = (unsigned char)184;
unsigned short var_39 = (unsigned short)9838;
unsigned int var_40 = 617642695U;
unsigned int var_41 = 3305589519U;
unsigned char arr_4 [21] [21] [21] ;
unsigned char arr_5 [21] ;
unsigned short arr_6 [21] [21] [21] [21] ;
long long int arr_7 [21] [21] [21] [21] [21] [21] ;
int arr_8 [21] [21] [21] [21] [21] ;
unsigned char arr_12 [21] [21] [21] ;
unsigned char arr_13 [21] [21] [21] ;
long long int arr_18 [22] [22] ;
unsigned int arr_19 [22] [22] [22] ;
short arr_21 [22] [22] [22] [22] ;
unsigned short arr_24 [22] [22] [22] ;
signed char arr_25 [22] [22] [22] [22] [22] [22] ;
unsigned int arr_9 [21] ;
signed char arr_15 [21] [21] ;
short arr_32 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)176 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)20687 : (unsigned short)43458;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -8771919051915523150LL : -6838048073386312264LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -1553079117 : 659441771;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = -737539572433995395LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 3477446208U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (short)-11499;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned short)27934;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3016557228U : 2867613494U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (short)-1630;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
