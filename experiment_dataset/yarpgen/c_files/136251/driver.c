#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 522239251U;
unsigned int var_1 = 3782997029U;
unsigned int var_2 = 2899496526U;
unsigned int var_3 = 3409466060U;
short var_4 = (short)16618;
unsigned long long int var_5 = 7642736967561611647ULL;
unsigned int var_7 = 2573638366U;
long long int var_8 = 530351959807721526LL;
unsigned long long int var_10 = 3421110409670839365ULL;
unsigned long long int var_11 = 10333022650654977986ULL;
unsigned int var_12 = 1687238315U;
unsigned long long int var_14 = 2746904249112993696ULL;
unsigned int var_15 = 571133388U;
unsigned long long int var_16 = 16151198260436002595ULL;
unsigned char var_17 = (unsigned char)14;
int zero = 0;
short var_18 = (short)-26900;
unsigned long long int var_19 = 11902235600245901230ULL;
long long int var_20 = -3187970984207727256LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 16449824481579299096ULL;
short var_23 = (short)-1875;
int var_24 = 908060954;
unsigned long long int var_25 = 4522520135933522781ULL;
short var_26 = (short)-25794;
short var_27 = (short)3948;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 2105353570U;
long long int var_30 = -8657368393193119901LL;
unsigned int var_31 = 967390481U;
int var_32 = -1198228194;
_Bool arr_0 [19] ;
unsigned long long int arr_1 [19] ;
_Bool arr_6 [22] [22] ;
unsigned long long int arr_7 [22] [22] ;
unsigned int arr_14 [19] [19] ;
unsigned short arr_16 [19] ;
_Bool arr_5 [17] [17] ;
int arr_8 [22] ;
unsigned long long int arr_11 [19] [19] ;
long long int arr_15 [19] [19] [19] ;
long long int arr_18 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 7171871692054484654ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 11361328772773312130ULL : 16388514756379086780ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = 270870440U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (unsigned short)15332;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 96845244 : -1830269223;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 7407578602594942016ULL : 6669150898201545446ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5991377974398349594LL : 4507587587404555411LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -2995645576101083614LL : -5535002265362925703LL;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
