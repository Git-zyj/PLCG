#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8351615078562245413LL;
unsigned long long int var_2 = 6893807510953091691ULL;
int var_4 = 44872971;
long long int var_6 = 3631103578802236494LL;
unsigned int var_8 = 3758707334U;
unsigned long long int var_9 = 8397907578559707782ULL;
long long int var_12 = -6450655429979884951LL;
long long int var_13 = -6364194037647630666LL;
long long int var_14 = 5229858577034267949LL;
unsigned long long int var_15 = 3426724300959939375ULL;
long long int var_16 = -5046222004381589337LL;
int zero = 0;
unsigned char var_18 = (unsigned char)21;
unsigned char var_19 = (unsigned char)138;
unsigned short var_20 = (unsigned short)54928;
_Bool var_21 = (_Bool)1;
long long int var_22 = -1180249417959714741LL;
long long int arr_0 [12] ;
short arr_1 [12] ;
long long int arr_6 [14] ;
unsigned long long int arr_2 [12] ;
unsigned short arr_3 [12] ;
int arr_7 [14] ;
short arr_10 [11] [11] ;
unsigned long long int arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -2058453831403202066LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-21104;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 5892237363314719746LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 14097984435706225232ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)37624;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1721857055;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-22923 : (short)-16120;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 10846654772034402204ULL : 17693520381090795653ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
