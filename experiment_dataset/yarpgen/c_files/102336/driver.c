#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 13357786534531368534ULL;
unsigned long long int var_7 = 17385931564272894611ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 14263580391907997095ULL;
long long int var_11 = 3250403755618539111LL;
_Bool var_13 = (_Bool)1;
long long int var_18 = -8648547746782575922LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-18483;
unsigned long long int var_21 = 13388896190717193053ULL;
_Bool var_22 = (_Bool)0;
unsigned char arr_2 [18] ;
unsigned long long int arr_3 [18] ;
short arr_4 [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 9433809399071822901ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)13951;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 10652990606447693925ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
