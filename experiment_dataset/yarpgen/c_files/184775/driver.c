#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1298477095U;
unsigned long long int var_3 = 12541886380098916563ULL;
unsigned long long int var_4 = 2309526211743063028ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 10854830770777868731ULL;
unsigned long long int var_7 = 11410180586927232825ULL;
unsigned long long int var_8 = 12414634985582600032ULL;
int var_10 = -1649686724;
unsigned long long int var_11 = 17158706800323786646ULL;
unsigned long long int var_12 = 10723969875992814372ULL;
unsigned long long int var_13 = 7497371929308111609ULL;
unsigned long long int var_14 = 11512939614864302779ULL;
unsigned int var_15 = 2095654806U;
int var_16 = 1134949654;
unsigned int var_17 = 2409717152U;
unsigned int var_18 = 2069271749U;
unsigned int var_19 = 4196014266U;
int zero = 0;
unsigned long long int var_20 = 5375520639202673082ULL;
int var_21 = -1753489239;
unsigned int var_22 = 4019387447U;
int var_23 = -708400681;
long long int var_24 = 8149375130834563991LL;
unsigned int var_25 = 2946598302U;
unsigned long long int var_26 = 8726613915143655900ULL;
unsigned long long int var_27 = 11131573699494275597ULL;
unsigned long long int var_28 = 6199512396895581662ULL;
unsigned long long int var_29 = 10951690866262550885ULL;
int arr_0 [13] ;
int arr_1 [13] ;
unsigned int arr_4 [13] [13] ;
long long int arr_6 [13] [13] ;
unsigned long long int arr_7 [13] ;
unsigned int arr_8 [13] [13] ;
long long int arr_9 [13] [13] ;
_Bool arr_14 [13] ;
_Bool arr_16 [13] [13] [13] [13] ;
_Bool arr_2 [13] ;
long long int arr_3 [13] ;
unsigned long long int arr_18 [13] [13] [13] [13] [13] [13] [13] ;
unsigned int arr_19 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1960453987;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1022675331;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 1135906751U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -6926961847890981815LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 10855477384421379711ULL : 7877542807989258094ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 1333118524U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = -2333159190714041836LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -6831579419136930349LL : 1586371748486204183LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 2722679218339565005ULL : 2978875365136307722ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 4275269485U : 1086063752U;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
