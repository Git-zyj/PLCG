#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned long long int var_2 = 5888512851796531535ULL;
unsigned char var_4 = (unsigned char)141;
unsigned long long int var_5 = 3579080302198847951ULL;
signed char var_6 = (signed char)76;
unsigned long long int var_7 = 12491295175091582861ULL;
signed char var_8 = (signed char)108;
unsigned char var_9 = (unsigned char)189;
int var_11 = 924307124;
signed char var_12 = (signed char)-117;
int var_13 = 1139994216;
int var_14 = -177743242;
signed char var_16 = (signed char)111;
int zero = 0;
unsigned char var_18 = (unsigned char)235;
unsigned long long int var_19 = 4761541064623136387ULL;
signed char var_20 = (signed char)-41;
int var_21 = -1576708726;
unsigned long long int var_22 = 4674421741954539021ULL;
int var_23 = -261096558;
int var_24 = 1265247859;
signed char arr_0 [15] [15] ;
int arr_2 [15] ;
unsigned long long int arr_7 [17] ;
int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-10 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -36033144 : 1120318054;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 1622850066513081926ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -260156832 : 1573899163;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
