#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5307936287660863272LL;
unsigned char var_5 = (unsigned char)235;
unsigned long long int var_6 = 16915170966248487033ULL;
signed char var_8 = (signed char)-124;
short var_12 = (short)-6277;
unsigned long long int var_13 = 2328001627926698645ULL;
unsigned long long int var_14 = 1109544610971710147ULL;
unsigned char var_17 = (unsigned char)114;
int zero = 0;
short var_18 = (short)-16645;
short var_19 = (short)1527;
unsigned long long int var_20 = 5321113894547469385ULL;
short var_21 = (short)15325;
signed char var_22 = (signed char)10;
short var_23 = (short)-9261;
unsigned char var_24 = (unsigned char)158;
unsigned char var_25 = (unsigned char)126;
unsigned int var_26 = 2237524370U;
unsigned long long int var_27 = 14907369908017662458ULL;
unsigned short var_28 = (unsigned short)11907;
unsigned char var_29 = (unsigned char)127;
unsigned int arr_0 [24] [24] ;
unsigned int arr_1 [24] [24] ;
short arr_3 [24] ;
unsigned int arr_4 [24] ;
unsigned int arr_5 [24] ;
short arr_24 [24] [24] ;
unsigned int arr_2 [24] [24] ;
long long int arr_6 [24] ;
unsigned char arr_9 [20] [20] ;
short arr_15 [20] ;
unsigned long long int arr_18 [20] [20] ;
unsigned int arr_19 [20] [20] ;
unsigned int arr_20 [20] ;
unsigned long long int arr_26 [24] ;
int arr_27 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 3081917528U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1699839617U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)28253;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1218579275U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 2128662932U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (short)-29337;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 2701348394U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -8439643356402593294LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (short)22912;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = 8103075106385156287ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = 2831338243U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = 1692612971U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 5411387616971324080ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -1076394944;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
