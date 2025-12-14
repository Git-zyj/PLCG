#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8583745970028600211ULL;
unsigned long long int var_3 = 9875788088044299827ULL;
unsigned long long int var_4 = 8654508264977693543ULL;
unsigned long long int var_8 = 16554755548570649546ULL;
unsigned long long int var_9 = 11451375950032480329ULL;
unsigned long long int var_11 = 1158680276761178855ULL;
unsigned long long int var_12 = 3675885706043755118ULL;
unsigned long long int var_13 = 2364426968027243844ULL;
unsigned long long int var_14 = 14525068615223573693ULL;
unsigned long long int var_15 = 12636372610181707192ULL;
int zero = 0;
unsigned long long int var_16 = 693416894966366192ULL;
unsigned long long int var_17 = 7863514969451295488ULL;
unsigned long long int var_18 = 4461367118566196412ULL;
unsigned long long int var_19 = 737861686360838037ULL;
unsigned long long int var_20 = 10119823149371178102ULL;
unsigned long long int var_21 = 10813193851533891245ULL;
unsigned long long int var_22 = 15588155103931335161ULL;
unsigned long long int var_23 = 1023850703904019804ULL;
unsigned long long int var_24 = 14876495902984427501ULL;
unsigned long long int var_25 = 10793977749711881258ULL;
unsigned long long int arr_1 [17] [17] ;
unsigned long long int arr_3 [17] [17] ;
unsigned long long int arr_7 [17] ;
unsigned long long int arr_9 [17] [17] ;
unsigned long long int arr_10 [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 8474541257990376031ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 13837328704872770623ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3981335932874875393ULL : 11080392264073273337ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 17131412367139660814ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 17914574799398002604ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
