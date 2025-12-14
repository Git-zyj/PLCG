#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7294549915868842406LL;
unsigned int var_2 = 1311475517U;
unsigned char var_3 = (unsigned char)183;
unsigned long long int var_5 = 9410525837641297339ULL;
unsigned long long int var_6 = 17358373476993790533ULL;
unsigned long long int var_8 = 15764182071683217027ULL;
unsigned long long int var_9 = 757024732376385349ULL;
unsigned short var_11 = (unsigned short)8412;
int var_12 = -809255233;
unsigned short var_13 = (unsigned short)5759;
unsigned int var_15 = 1419706540U;
unsigned short var_18 = (unsigned short)9828;
unsigned long long int var_19 = 17333135020120389109ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)202;
unsigned short var_21 = (unsigned short)26915;
_Bool var_22 = (_Bool)1;
long long int var_23 = -3616765013720450094LL;
unsigned short arr_0 [14] ;
unsigned int arr_1 [14] ;
long long int arr_2 [14] [14] [14] ;
_Bool arr_3 [14] [14] ;
unsigned char arr_4 [14] [14] ;
int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)29679;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 478390644U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4120657430501465940LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -1618474938;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
