#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9728685838862249625ULL;
unsigned long long int var_1 = 11173414160636267624ULL;
_Bool var_6 = (_Bool)0;
long long int var_8 = -8137887574897279962LL;
long long int var_9 = 6452853021843137621LL;
long long int var_11 = -1724291944806756634LL;
signed char var_12 = (signed char)49;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -4313382258823042994LL;
int var_21 = -1097772633;
unsigned long long int var_22 = 3906447374427162236ULL;
signed char var_23 = (signed char)7;
signed char var_24 = (signed char)-26;
_Bool var_25 = (_Bool)1;
short var_26 = (short)27785;
int var_27 = -163379282;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)-39;
int var_30 = 93060994;
signed char var_31 = (signed char)85;
long long int var_32 = 4573056592965341656LL;
signed char var_33 = (signed char)111;
unsigned char var_34 = (unsigned char)57;
long long int var_35 = 6338138883600627190LL;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)130;
int var_38 = -11079862;
signed char var_39 = (signed char)97;
signed char var_40 = (signed char)38;
short var_41 = (short)26781;
long long int var_42 = -4229830225517962556LL;
signed char var_43 = (signed char)60;
signed char var_44 = (signed char)-53;
signed char var_45 = (signed char)-83;
long long int arr_0 [14] ;
short arr_1 [14] ;
int arr_2 [14] ;
long long int arr_4 [14] ;
signed char arr_5 [14] [14] ;
unsigned char arr_8 [14] [14] ;
int arr_11 [14] [14] [14] ;
long long int arr_12 [14] [14] [14] ;
long long int arr_16 [14] [14] [14] [14] ;
unsigned long long int arr_24 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 5920041759366410029LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-6696;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -1032192389;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -4917319183127312884LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -1441637344;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2101732310372566795LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -4073357597498499738LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 4646260096331984031ULL : 11726949298885225461ULL;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
