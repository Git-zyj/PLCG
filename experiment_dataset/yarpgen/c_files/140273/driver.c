#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1157505496;
unsigned short var_1 = (unsigned short)5422;
_Bool var_4 = (_Bool)0;
long long int var_5 = 5968304686479562266LL;
unsigned short var_6 = (unsigned short)59401;
signed char var_7 = (signed char)8;
long long int var_9 = -9137423472933270568LL;
unsigned short var_10 = (unsigned short)51038;
int zero = 0;
short var_11 = (short)-25471;
long long int var_12 = 6453720981589388784LL;
unsigned char var_13 = (unsigned char)68;
unsigned long long int var_14 = 13286350668219745348ULL;
unsigned long long int var_15 = 7485386156777633474ULL;
long long int var_16 = 7593867663170033886LL;
unsigned char var_17 = (unsigned char)47;
long long int var_18 = -4047239955910398275LL;
unsigned long long int var_19 = 14473349278080193702ULL;
unsigned short var_20 = (unsigned short)60603;
unsigned char var_21 = (unsigned char)150;
long long int var_22 = 2076473765700605783LL;
unsigned short var_23 = (unsigned short)64069;
unsigned short var_24 = (unsigned short)61445;
unsigned long long int var_25 = 16952720827835191762ULL;
long long int var_26 = 6143783190070771434LL;
unsigned char var_27 = (unsigned char)198;
long long int var_28 = 7232711884933739015LL;
signed char var_29 = (signed char)-20;
int arr_0 [10] ;
unsigned short arr_2 [10] ;
long long int arr_3 [10] ;
int arr_5 [10] ;
long long int arr_7 [10] [10] [10] ;
int arr_9 [10] [10] ;
unsigned char arr_10 [10] ;
short arr_11 [10] ;
unsigned short arr_14 [10] ;
int arr_23 [10] ;
unsigned char arr_26 [10] ;
long long int arr_33 [13] ;
unsigned short arr_34 [13] [13] ;
short arr_37 [22] ;
unsigned short arr_38 [22] ;
unsigned char arr_42 [22] [22] [22] ;
unsigned long long int arr_44 [22] [22] [22] [22] ;
unsigned char arr_45 [22] [22] [22] [22] ;
signed char arr_46 [22] [22] [22] [22] [22] ;
unsigned short arr_4 [10] [10] ;
int arr_12 [10] ;
long long int arr_24 [10] [10] [10] [10] [10] ;
long long int arr_25 [10] [10] ;
long long int arr_29 [10] ;
_Bool arr_30 [10] ;
unsigned char arr_31 [10] [10] ;
short arr_35 [13] ;
unsigned long long int arr_36 [13] ;
unsigned char arr_39 [22] ;
unsigned short arr_40 [22] ;
unsigned short arr_41 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 977333772;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)12883;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 177038280886645042LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -376591775;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -3650339917402620437LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? -2090306091 : -91315737;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (short)1570;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (unsigned short)55557;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = -1840390487;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = -935440006863819485LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned short)8838;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_37 [i_0] = (short)25755;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_38 [i_0] = (unsigned short)4892;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = 8582781172619977754ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)24353;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1779682350 : 546690536;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -8944508019486978986LL : 1854190727467864108LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_25 [i_0] [i_1] = -4057668960843292527LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = 2498225917552296416LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_30 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_35 [i_0] = (short)-29415;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = 7227621908812636208ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_39 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_40 [i_0] = (unsigned short)12939;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = (unsigned short)48052;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_41 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
