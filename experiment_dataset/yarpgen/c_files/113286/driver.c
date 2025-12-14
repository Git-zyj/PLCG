#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50659;
int var_3 = 1415004016;
int var_4 = 1039212110;
unsigned short var_5 = (unsigned short)36082;
int var_6 = 1210068000;
unsigned long long int var_7 = 2172164065292797372ULL;
long long int var_8 = -6489090260995624553LL;
unsigned short var_9 = (unsigned short)39703;
long long int var_11 = 3905128896433188498LL;
long long int var_13 = 8272050224979303546LL;
unsigned short var_14 = (unsigned short)4856;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)59780;
long long int var_17 = 1005333156469170734LL;
long long int var_18 = -4443576560377495237LL;
unsigned long long int var_19 = 8619751716934826261ULL;
long long int var_20 = -6073294885481953640LL;
long long int var_21 = 4299659924097817721LL;
unsigned int var_22 = 1391871128U;
int var_23 = -393491290;
long long int var_24 = -342433103604803836LL;
int var_25 = 571712726;
int arr_0 [12] [12] ;
short arr_1 [12] [12] ;
unsigned char arr_3 [22] ;
unsigned char arr_4 [22] ;
unsigned char arr_8 [12] ;
unsigned long long int arr_11 [12] [12] [12] ;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 667018314;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-3665;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)165 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 12168278739304471109ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1553200836 : -116870240;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
