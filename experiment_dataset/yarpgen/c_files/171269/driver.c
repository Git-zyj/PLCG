#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1943156369766634662ULL;
unsigned long long int var_1 = 17091519908952085615ULL;
unsigned long long int var_3 = 8122096954933529427ULL;
unsigned long long int var_4 = 4405653544846714896ULL;
unsigned long long int var_6 = 5895622831031329231ULL;
unsigned long long int var_7 = 4270312195190244992ULL;
unsigned long long int var_8 = 9995227039633927071ULL;
unsigned long long int var_9 = 8781583805469702164ULL;
unsigned long long int var_10 = 17687117965897296906ULL;
unsigned long long int var_12 = 16212666174260206561ULL;
int zero = 0;
unsigned long long int var_13 = 18260024302707326792ULL;
unsigned long long int var_14 = 13670512657604470392ULL;
unsigned long long int var_15 = 9796337009739062202ULL;
unsigned long long int var_16 = 11759331757896145991ULL;
unsigned long long int var_17 = 11777832849263788459ULL;
unsigned long long int var_18 = 13299772571163448903ULL;
unsigned long long int arr_1 [19] [19] ;
unsigned long long int arr_3 [19] [19] ;
unsigned long long int arr_6 [19] ;
unsigned long long int arr_7 [19] [19] [19] ;
unsigned long long int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 3798183874922873015ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 5568212103112967737ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3333280388488761251ULL : 11955582394814619355ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7899320024087941432ULL : 16171674036610093961ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 7867148601017527992ULL : 9140011474487319771ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
