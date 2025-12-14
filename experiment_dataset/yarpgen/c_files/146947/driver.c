#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)65;
unsigned char var_4 = (unsigned char)202;
unsigned int var_6 = 6684431U;
signed char var_10 = (signed char)-123;
long long int var_12 = 8865700271857080964LL;
int zero = 0;
signed char var_20 = (signed char)-83;
int var_21 = -85915895;
unsigned int var_22 = 4047168458U;
unsigned long long int var_23 = 3106608753879811778ULL;
unsigned long long int var_24 = 15880191783496566529ULL;
unsigned int arr_0 [24] ;
unsigned short arr_2 [24] ;
unsigned long long int arr_4 [24] ;
long long int arr_5 [24] [24] [24] ;
long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2790058517U : 2363920889U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)49652;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 17566063025332525690ULL : 4218950261093585173ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -7541885516148539289LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 9214972638523062806LL : -7150256255297472491LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
