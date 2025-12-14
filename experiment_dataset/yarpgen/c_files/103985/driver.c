#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2419126432746593269LL;
unsigned long long int var_4 = 13343307550299716673ULL;
unsigned short var_5 = (unsigned short)20565;
long long int var_8 = 224044573367152588LL;
long long int var_9 = -2352898263355003600LL;
unsigned short var_10 = (unsigned short)47803;
unsigned short var_11 = (unsigned short)21745;
unsigned short var_14 = (unsigned short)38754;
unsigned short var_16 = (unsigned short)7061;
int zero = 0;
unsigned long long int var_17 = 9905953653444702048ULL;
unsigned int var_18 = 1624875669U;
long long int var_19 = 6029922135913135638LL;
unsigned long long int var_20 = 10407109734472949161ULL;
unsigned int var_21 = 3209435933U;
unsigned long long int var_22 = 2157264209471944721ULL;
unsigned short arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_3 [24] [24] ;
long long int arr_6 [24] [24] ;
unsigned long long int arr_7 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)18525;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 14625178600012971903ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 8196824035965655064ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? -125264321333843043LL : 8629562595814763751LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 15942376574378271177ULL : 16024523899927138318ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
