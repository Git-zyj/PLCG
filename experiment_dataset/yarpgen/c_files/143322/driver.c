#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 7042904756242208202LL;
long long int var_10 = -5789040719575334336LL;
long long int var_14 = -6633129354228430197LL;
int zero = 0;
unsigned long long int var_20 = 16263447043524342218ULL;
unsigned long long int var_21 = 15522855961940612765ULL;
long long int var_22 = 2739799123642906966LL;
unsigned long long int var_23 = 516975258290798794ULL;
unsigned long long int var_24 = 3992557643594051358ULL;
unsigned long long int var_25 = 2465753102263313746ULL;
unsigned long long int var_26 = 18005563562539898886ULL;
unsigned long long int arr_1 [25] ;
unsigned long long int arr_3 [18] ;
unsigned long long int arr_2 [25] [25] ;
long long int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 17658530733498880315ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 14375049421888922818ULL : 13250571974971099521ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 4137125621972681940ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 2013360481715507201LL : -4626672173975588567LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
