#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -320742889750903217LL;
int var_8 = -59568584;
int var_9 = 523731094;
int zero = 0;
long long int var_20 = 5500881173205613205LL;
long long int var_21 = 1976699017976771937LL;
long long int var_22 = 2046804527717254855LL;
int var_23 = -765417191;
long long int var_24 = -8213533272745951086LL;
long long int var_25 = -8802386294364502826LL;
long long int var_26 = -3296829632386908236LL;
int var_27 = -1021824238;
long long int var_28 = -3555871922517136867LL;
int var_29 = 1948488442;
long long int var_30 = -3964660807202101955LL;
long long int var_31 = 6067123295993036157LL;
long long int var_32 = -6794985214052002125LL;
int arr_0 [22] ;
long long int arr_2 [22] [22] [22] ;
int arr_4 [22] ;
long long int arr_6 [22] ;
long long int arr_8 [22] [22] ;
long long int arr_9 [22] ;
long long int arr_10 [22] [22] [22] ;
int arr_14 [22] ;
long long int arr_15 [23] ;
long long int arr_17 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = -1765989898;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1565055416890407881LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1571282984;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 3535916258339718422LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 7542353276254148128LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = -6125079274988417483LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 6611558767073020527LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 1494979200;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = -3016804942590956377LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = 1355556415624357658LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
