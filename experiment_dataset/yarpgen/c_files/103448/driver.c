#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -242112504;
unsigned int var_1 = 274759306U;
int var_2 = -1098225465;
int var_3 = 1945245017;
unsigned int var_4 = 3630345846U;
int var_6 = 393721592;
unsigned int var_7 = 1442761450U;
unsigned int var_9 = 82081634U;
unsigned int var_10 = 3061544273U;
int zero = 0;
unsigned int var_11 = 3830928165U;
unsigned int var_12 = 809979886U;
unsigned int var_13 = 2684917408U;
unsigned int var_14 = 4028531302U;
unsigned int var_15 = 1984736903U;
unsigned int var_16 = 6990696U;
unsigned int var_17 = 860994512U;
unsigned int var_18 = 4070561576U;
unsigned int var_19 = 664727338U;
int var_20 = 414880928;
unsigned int var_21 = 1636583693U;
unsigned int var_22 = 1567277937U;
unsigned int var_23 = 3641222662U;
unsigned int var_24 = 1651701678U;
int var_25 = 235543693;
unsigned int var_26 = 1726601165U;
unsigned int var_27 = 1231731229U;
unsigned int var_28 = 2832767412U;
unsigned int var_29 = 2588267694U;
unsigned int var_30 = 3788078274U;
unsigned int var_31 = 1438745315U;
unsigned int var_32 = 2965218661U;
int var_33 = 1352026705;
unsigned int var_34 = 1413528050U;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned int arr_2 [12] ;
unsigned int arr_3 [12] ;
unsigned int arr_4 [12] [12] ;
unsigned int arr_5 [12] [12] [12] ;
int arr_6 [12] [12] [12] ;
unsigned int arr_7 [12] [12] [12] ;
unsigned int arr_8 [12] [12] [12] [12] ;
unsigned int arr_10 [12] [12] [12] [12] [12] [12] ;
int arr_11 [12] [12] [12] ;
unsigned int arr_12 [12] [12] [12] [12] [12] [12] [12] ;
int arr_16 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 3447954085U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 111298284U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2226093036U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3479729371U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 828781808U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 403072567U : 2471634323U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1558643732;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1029790391U : 2883699354U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1447196446U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 2108128995U : 4075534545U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -435729863;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 898234214U : 2364254491U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1290977207 : -1482987523;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
