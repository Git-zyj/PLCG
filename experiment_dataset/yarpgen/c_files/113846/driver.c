#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1380678033U;
_Bool var_2 = (_Bool)1;
long long int var_4 = -6517521188997219727LL;
unsigned long long int var_5 = 9373332865417027342ULL;
unsigned char var_6 = (unsigned char)209;
int var_7 = 682126206;
long long int var_9 = 3570962803613848109LL;
unsigned long long int var_10 = 4880578471720595735ULL;
unsigned int var_11 = 2061879427U;
unsigned int var_13 = 1722018711U;
int var_14 = -865145406;
unsigned char var_15 = (unsigned char)29;
int var_16 = 468703172;
long long int var_17 = -6461534568958871754LL;
unsigned long long int var_18 = 1383248675093903364ULL;
long long int var_19 = -2871350590890026542LL;
int zero = 0;
unsigned char var_20 = (unsigned char)108;
int var_21 = 687888204;
short var_22 = (short)16197;
long long int var_23 = 2515812661062014875LL;
long long int var_24 = -4539048301015147692LL;
long long int var_25 = 6094886070811300395LL;
int var_26 = -1597354875;
int var_27 = -364271716;
int var_28 = 609092242;
long long int var_29 = -685169717988245182LL;
long long int var_30 = -1904800259534418948LL;
unsigned char var_31 = (unsigned char)215;
unsigned int var_32 = 734050726U;
int var_33 = 1651723093;
unsigned int var_34 = 2507911328U;
long long int var_35 = -8235056767321437702LL;
unsigned int var_36 = 3843182372U;
unsigned int var_37 = 2449438919U;
unsigned int var_38 = 1232066691U;
unsigned int arr_0 [11] ;
int arr_1 [11] ;
unsigned int arr_3 [11] [11] [11] ;
unsigned char arr_4 [11] ;
int arr_5 [11] [11] [11] ;
unsigned int arr_6 [11] [11] [11] ;
unsigned int arr_7 [11] ;
int arr_8 [11] [11] [11] ;
int arr_10 [11] [11] [11] [11] [11] ;
long long int arr_12 [11] [11] [11] [11] [11] ;
int arr_13 [11] [11] [11] [11] [11] [11] ;
int arr_14 [11] [11] [11] [11] [11] [11] [11] ;
long long int arr_17 [11] [11] [11] [11] [11] [11] ;
long long int arr_25 [13] ;
int arr_26 [13] ;
short arr_28 [13] [13] ;
short arr_29 [13] [13] [13] ;
_Bool arr_30 [13] [13] [13] ;
int arr_31 [13] [13] [13] ;
int arr_37 [18] [18] ;
int arr_39 [18] [18] ;
unsigned char arr_40 [18] ;
int arr_46 [16] [16] ;
int arr_15 [11] [11] [11] [11] [11] [11] [11] ;
unsigned int arr_16 [11] [11] [11] [11] [11] ;
int arr_19 [11] [11] [11] [11] [11] [11] [11] ;
int arr_20 [11] [11] [11] [11] [11] [11] [11] ;
int arr_21 [11] [11] [11] [11] ;
unsigned int arr_22 [11] [11] [11] ;
_Bool arr_32 [13] [13] [13] ;
short arr_33 [13] [13] [13] ;
long long int arr_34 [13] [13] ;
unsigned long long int arr_35 [13] [13] ;
int arr_36 [13] [13] ;
unsigned int arr_41 [18] ;
unsigned char arr_42 [18] ;
int arr_43 [18] ;
unsigned int arr_47 [16] [16] ;
long long int arr_48 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 380142120U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -1476471011;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1520417899U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -462162555;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1742106785U : 1270345253U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1572065745U : 3726316929U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -756899434;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 2061941768;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 5153764380416962409LL : -2378030662241123839LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 1691792155 : -1254073982;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 595918782 : 1437778429;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 660847590209234574LL : 2107861331911825501LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = 7093415650223454116LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = -766959850;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_28 [i_0] [i_1] = (short)-11084;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (short)-14115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = -207782246;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_37 [i_0] [i_1] = -119184735;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_39 [i_0] [i_1] = -2139007644;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_46 [i_0] [i_1] = 917865392;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 1733436482 : -955791371;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 839370803U : 1403575224U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? -1522060681 : 1207767618;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 903664205 : -1455561310;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -854236814 : 1997254456;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1805780821U : 1949667913U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (short)-542;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_34 [i_0] [i_1] = -2952490034308355747LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_35 [i_0] [i_1] = 10730713564600598198ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_36 [i_0] [i_1] = -412579333;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_41 [i_0] = 2322807980U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_43 [i_0] = 861848794;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_47 [i_0] [i_1] = 138492441U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_48 [i_0] = 4422171885592512508LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
