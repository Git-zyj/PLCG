#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1654163171U;
long long int var_4 = 3343067876259885325LL;
short var_8 = (short)29016;
unsigned short var_9 = (unsigned short)13457;
unsigned int var_10 = 743451100U;
unsigned char var_14 = (unsigned char)110;
unsigned short var_15 = (unsigned short)6980;
unsigned long long int var_16 = 6468951901701595710ULL;
int zero = 0;
unsigned long long int var_19 = 1549159953016493117ULL;
long long int var_20 = 1064266448039189531LL;
unsigned short var_21 = (unsigned short)33387;
int var_22 = -1241226128;
unsigned int var_23 = 2213317688U;
unsigned long long int var_24 = 582975888363844259ULL;
unsigned int var_25 = 3238852547U;
int arr_3 [19] [19] ;
unsigned short arr_5 [19] [19] [19] [19] ;
unsigned long long int arr_9 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -801747226;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)59122;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 14694262772757192926ULL;
}

void checksum() {
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
