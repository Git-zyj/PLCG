#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 424899993;
unsigned long long int var_1 = 14947379227368488191ULL;
unsigned short var_3 = (unsigned short)47599;
unsigned long long int var_5 = 4417334985209902623ULL;
long long int var_6 = -8997741350381458838LL;
int var_9 = 1598073936;
unsigned int var_11 = 1512649146U;
unsigned char var_12 = (unsigned char)186;
long long int var_13 = 5076353375962367182LL;
int zero = 0;
short var_15 = (short)-21026;
long long int var_16 = 6637234027425084545LL;
long long int var_17 = -4380720327561061925LL;
long long int var_18 = -914505675658913730LL;
unsigned char var_19 = (unsigned char)10;
int var_20 = -1696689881;
long long int var_21 = -7804315757526616001LL;
long long int var_22 = -3703826531503746116LL;
unsigned int arr_2 [22] [22] ;
long long int arr_3 [22] ;
signed char arr_10 [22] [22] ;
unsigned long long int arr_8 [22] ;
int arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 3423887530U : 1968009727U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -5533311658597070402LL : 578325218447802908LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 15741447788712497434ULL : 494665112655323578ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 950597938;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
