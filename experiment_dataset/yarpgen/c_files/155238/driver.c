#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
unsigned int var_1 = 1545160139U;
signed char var_2 = (signed char)24;
signed char var_3 = (signed char)6;
unsigned long long int var_4 = 735183998580690806ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-77;
long long int var_8 = 2856247805105754294LL;
unsigned short var_9 = (unsigned short)34668;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)38179;
int zero = 0;
signed char var_12 = (signed char)-76;
long long int var_13 = 7537642365214457723LL;
unsigned char var_14 = (unsigned char)98;
_Bool var_15 = (_Bool)1;
int var_16 = 1180078941;
signed char var_17 = (signed char)33;
unsigned char var_18 = (unsigned char)83;
unsigned long long int var_19 = 8057906626020827913ULL;
long long int var_20 = 6720364489676160002LL;
_Bool var_21 = (_Bool)0;
int var_22 = -499209781;
unsigned short var_23 = (unsigned short)45262;
long long int var_24 = -3635070908084608854LL;
unsigned char var_25 = (unsigned char)151;
unsigned long long int var_26 = 1578443206352804658ULL;
unsigned long long int var_27 = 14847468811246505953ULL;
long long int var_28 = -3129135179601658761LL;
unsigned long long int var_29 = 2341317560681044355ULL;
int var_30 = -1476220875;
unsigned long long int var_31 = 273996985483183165ULL;
signed char var_32 = (signed char)-95;
unsigned short var_33 = (unsigned short)63240;
unsigned short var_34 = (unsigned short)8014;
unsigned int var_35 = 3552364665U;
unsigned long long int var_36 = 7350818446739302407ULL;
int var_37 = 377120908;
unsigned long long int var_38 = 7234567185934526802ULL;
int var_39 = -111508897;
_Bool var_40 = (_Bool)0;
unsigned short var_41 = (unsigned short)22054;
long long int var_42 = -603801041711212745LL;
unsigned int var_43 = 4157737770U;
unsigned long long int var_44 = 1270213115144250229ULL;
unsigned long long int var_45 = 15148275116908475402ULL;
unsigned char var_46 = (unsigned char)0;
unsigned char var_47 = (unsigned char)146;
unsigned char var_48 = (unsigned char)237;
int var_49 = -13420087;
unsigned long long int var_50 = 17228413488058378975ULL;
unsigned char var_51 = (unsigned char)136;
int var_52 = 1595967815;
unsigned int var_53 = 3966877921U;
unsigned int var_54 = 794241117U;
_Bool var_55 = (_Bool)1;
short var_56 = (short)32740;
_Bool var_57 = (_Bool)0;
signed char var_58 = (signed char)-11;
_Bool var_59 = (_Bool)1;
short var_60 = (short)11301;
int var_61 = -627189429;
int var_62 = 1552936781;
_Bool var_63 = (_Bool)1;
unsigned short var_64 = (unsigned short)62713;
unsigned short var_65 = (unsigned short)11225;
signed char var_66 = (signed char)-71;
unsigned long long int var_67 = 9161312856686339664ULL;
unsigned char var_68 = (unsigned char)202;
long long int var_69 = -8572189090353999390LL;
unsigned int arr_3 [10] ;
unsigned long long int arr_4 [10] ;
signed char arr_10 [10] [10] [10] [10] ;
unsigned char arr_18 [10] [10] [10] [10] [10] ;
unsigned char arr_26 [11] ;
unsigned char arr_27 [11] ;
unsigned long long int arr_28 [11] ;
unsigned short arr_33 [11] [11] [11] [11] ;
unsigned long long int arr_35 [19] [19] ;
unsigned long long int arr_36 [19] [19] ;
unsigned char arr_39 [19] [19] [19] ;
unsigned short arr_40 [19] [19] ;
int arr_43 [19] [19] [19] [19] [19] [19] ;
short arr_44 [19] [19] ;
long long int arr_46 [19] ;
unsigned int arr_54 [19] [19] [19] [19] ;
int arr_60 [19] [19] ;
unsigned int arr_67 [23] ;
_Bool arr_68 [23] [23] ;
long long int arr_73 [24] [24] ;
long long int arr_75 [24] [24] ;
unsigned short arr_77 [24] [24] [24] [24] [24] ;
int arr_80 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_83 [24] ;
_Bool arr_14 [10] [10] [10] ;
long long int arr_19 [10] [10] ;
signed char arr_23 [10] [10] [10] ;
long long int arr_24 [10] [10] ;
unsigned int arr_50 [19] ;
unsigned int arr_51 [19] [19] [19] ;
long long int arr_58 [19] [19] [19] [19] ;
_Bool arr_59 [19] ;
unsigned char arr_62 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1649803382U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 16741378348432701869ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)17 : (signed char)-46;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = 6616974866703488790ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (unsigned short)6281;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_35 [i_0] [i_1] = 753646188089272507ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_36 [i_0] [i_1] = 17655272597824190400ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)4969;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 911335040;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_44 [i_0] [i_1] = (short)28456;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? 1329238432551132435LL : 5182666310682527026LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = 3103408849U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_60 [i_0] [i_1] = -1330470076;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_67 [i_0] = 1965321278U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_68 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_73 [i_0] [i_1] = 1167920545185486125LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_75 [i_0] [i_1] = -3652659436317865706LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_77 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)41689 : (unsigned short)34696;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_80 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -1788166889 : 1453194787;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_83 [i_0] = (i_0 % 2 == 0) ? (unsigned char)128 : (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? -1136501985471903494LL : 7860297625597719527LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)93 : (signed char)-67;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? 6719148061434323257LL : -1709032634521721860LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_50 [i_0] = 555238366U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = 307797801U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = -6933901036498299210LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_59 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (unsigned char)229;
}

void checksum() {
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
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_51 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_58 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_59 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_62 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
