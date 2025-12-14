#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49954;
unsigned char var_1 = (unsigned char)211;
unsigned long long int var_2 = 5437987196317695020ULL;
unsigned short var_4 = (unsigned short)63015;
int var_5 = -1423921472;
unsigned short var_6 = (unsigned short)24281;
int var_7 = -867407470;
long long int var_8 = -1224629876536703768LL;
short var_9 = (short)9798;
int zero = 0;
unsigned int var_11 = 391451725U;
unsigned char var_12 = (unsigned char)43;
int var_13 = 592734950;
unsigned int var_14 = 530543886U;
unsigned long long int var_15 = 6310616756305980802ULL;
short var_16 = (short)6361;
unsigned long long int var_17 = 7646826510244657490ULL;
signed char var_18 = (signed char)-37;
signed char var_19 = (signed char)-50;
int var_20 = -16663713;
unsigned long long int arr_0 [16] ;
unsigned int arr_1 [16] ;
int arr_2 [16] [16] ;
long long int arr_3 [16] ;
int arr_4 [16] ;
unsigned long long int arr_10 [16] ;
int arr_11 [16] ;
unsigned short arr_5 [16] ;
unsigned char arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 9336172986485078921ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2551248812U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -1443592073;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -2761494776451827397LL : 1148668087600515848LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2144513524 : 1930087008;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 2823593711697907748ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = -26027152;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60654 : (unsigned short)14032;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)52 : (unsigned char)182;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
