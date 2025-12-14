#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31510;
long long int var_1 = -1986969880040002998LL;
short var_2 = (short)-25244;
short var_3 = (short)20391;
long long int var_4 = -809011070209038142LL;
short var_5 = (short)12095;
short var_7 = (short)-28096;
short var_8 = (short)13296;
short var_9 = (short)-27518;
int zero = 0;
short var_10 = (short)3046;
short var_11 = (short)10465;
long long int var_12 = 485365014909746518LL;
short var_13 = (short)-18813;
short var_14 = (short)-30020;
long long int var_15 = 3713901029071403074LL;
short var_16 = (short)19671;
short arr_0 [14] [14] ;
short arr_1 [14] ;
short arr_2 [14] [14] [14] ;
long long int arr_3 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-16375;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-3502;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-10622 : (short)9876;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2847591689346751321LL : -782521036818844114LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
