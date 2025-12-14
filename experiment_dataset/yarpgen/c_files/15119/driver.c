#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17190648372392645253ULL;
long long int var_2 = 2259152666274521349LL;
long long int var_3 = -718399498737251271LL;
long long int var_4 = 6501717261728528975LL;
unsigned short var_6 = (unsigned short)55712;
unsigned short var_7 = (unsigned short)65434;
long long int var_8 = -7088794082918232036LL;
unsigned short var_9 = (unsigned short)15464;
long long int var_10 = -5156905274134226302LL;
long long int var_11 = 6193559185006309764LL;
long long int var_13 = 400074366403444062LL;
unsigned long long int var_14 = 2724653541156238284ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)33632;
unsigned long long int var_16 = 18231310597145324224ULL;
long long int var_17 = -8149016869414029162LL;
unsigned short var_18 = (unsigned short)60051;
unsigned int var_19 = 1176600682U;
unsigned int var_20 = 1646147550U;
unsigned long long int var_21 = 12698259444272693602ULL;
long long int var_22 = -4925873646181730510LL;
long long int var_23 = 7341130588394273908LL;
unsigned long long int var_24 = 1859312607685088069ULL;
unsigned short var_25 = (unsigned short)45617;
long long int var_26 = 6069104753807437243LL;
long long int var_27 = -6001080644142803650LL;
unsigned short var_28 = (unsigned short)10621;
long long int var_29 = 3067196699365306446LL;
unsigned int var_30 = 2225195237U;
unsigned long long int var_31 = 16400937054433651849ULL;
unsigned short var_32 = (unsigned short)27922;
unsigned short var_33 = (unsigned short)23629;
unsigned long long int var_34 = 2052600524093798364ULL;
unsigned long long int arr_1 [25] ;
unsigned short arr_2 [25] [25] [25] ;
unsigned short arr_3 [25] [25] [25] ;
long long int arr_5 [25] [25] [25] [25] ;
unsigned int arr_6 [25] [25] [25] [25] ;
unsigned long long int arr_7 [25] [25] ;
long long int arr_11 [25] ;
unsigned short arr_12 [25] [25] [25] ;
unsigned short arr_16 [25] ;
unsigned int arr_17 [25] ;
unsigned int arr_18 [25] [25] [25] ;
unsigned long long int arr_20 [25] [25] ;
unsigned int arr_21 [25] [25] ;
unsigned short arr_26 [12] ;
long long int arr_8 [25] [25] [25] ;
unsigned int arr_9 [25] ;
long long int arr_10 [25] [25] [25] ;
unsigned long long int arr_13 [25] [25] ;
long long int arr_14 [25] ;
unsigned int arr_19 [25] ;
unsigned long long int arr_24 [12] ;
long long int arr_28 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 12937529453007278726ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)13606 : (unsigned short)39493;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)24462 : (unsigned short)65313;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -638495118666695378LL : 7743789665347004522LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2956515623U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 15824358070713434741ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -2466523351046861501LL : 2764461316229178410LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)62193 : (unsigned short)33020;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32467 : (unsigned short)48339;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 1034311169U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 647319639U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 4810247846304331507ULL : 10643645238973008556ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 1330438680U : 1633001773U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = (unsigned short)3337;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3191489533249727557LL : -4278152122412290656LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 4117248705U : 1119120648U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1939751784792263104LL : -4540585781745957987LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 13795467011766796277ULL : 3046552536799047118ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 904742625268125246LL : -5677579535098061314LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 2687525038U : 24410571U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = 7061384764005618538ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = -1928714246160945617LL;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
