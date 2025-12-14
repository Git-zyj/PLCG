#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 197080994U;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)148;
short var_3 = (short)-3226;
unsigned long long int var_9 = 1360266362523721857ULL;
long long int var_11 = 772636838509566917LL;
unsigned long long int var_12 = 3959767435010014041ULL;
unsigned int var_13 = 2353058185U;
int zero = 0;
long long int var_14 = 4539965550391364236LL;
unsigned int var_15 = 3989320650U;
long long int var_16 = 5136532619621856146LL;
long long int var_17 = 5522408000591018700LL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)14;
unsigned int var_20 = 3833284504U;
long long int var_21 = -7575152123967335299LL;
long long int var_22 = -2779141887513547150LL;
unsigned int var_23 = 108391626U;
short arr_0 [19] [19] ;
unsigned int arr_1 [19] [19] ;
unsigned char arr_2 [19] [19] ;
unsigned long long int arr_3 [19] [19] ;
int arr_5 [19] ;
unsigned long long int arr_6 [19] [19] [19] [19] ;
_Bool arr_7 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_8 [19] [19] [19] [19] [19] ;
long long int arr_9 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (short)24225;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 3096544331U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 3310179045026364455ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -282591554;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 9472949232060067024ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 15745361199414097314ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -4918094445347406645LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
