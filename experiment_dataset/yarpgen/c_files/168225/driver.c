#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_18 = (unsigned short)40441;
int var_19 = 1718583343;
unsigned char var_20 = (unsigned char)5;
int var_21 = 1011110169;
unsigned short var_22 = (unsigned short)14584;
unsigned int var_23 = 1355788129U;
int var_24 = 1205833276;
short var_25 = (short)-13424;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)1;
unsigned short var_29 = (unsigned short)25194;
unsigned char var_30 = (unsigned char)52;
long long int var_31 = 2228768228297902805LL;
unsigned short var_32 = (unsigned short)27539;
long long int var_33 = -8407423854860384079LL;
int var_34 = -762656089;
int var_35 = -1005617871;
unsigned int var_36 = 1927940459U;
signed char var_37 = (signed char)-55;
unsigned short var_38 = (unsigned short)48727;
unsigned char var_39 = (unsigned char)162;
int var_40 = 1443462535;
unsigned long long int var_41 = 10909069961160848872ULL;
_Bool var_42 = (_Bool)1;
_Bool var_43 = (_Bool)1;
unsigned long long int var_44 = 3713599392497640512ULL;
_Bool var_45 = (_Bool)0;
int var_46 = 1964890978;
unsigned short var_47 = (unsigned short)31680;
unsigned short var_48 = (unsigned short)32939;
int var_49 = -1570800550;
unsigned int var_50 = 1783786984U;
int var_51 = -2033121645;
_Bool var_52 = (_Bool)1;
_Bool var_53 = (_Bool)0;
unsigned char var_54 = (unsigned char)63;
unsigned long long int var_55 = 1113686243424562085ULL;
int var_56 = -1942611592;
unsigned long long int var_57 = 12857537842223092429ULL;
int var_58 = 796114139;
int var_59 = -806236474;
_Bool var_60 = (_Bool)1;
int var_61 = 1822321339;
signed char var_62 = (signed char)-88;
int var_63 = 1353819450;
long long int var_64 = -7885120391496819405LL;
unsigned long long int var_65 = 10450094043242730611ULL;
unsigned short var_66 = (unsigned short)10466;
long long int var_67 = -84690618357084375LL;
_Bool var_68 = (_Bool)1;
int var_69 = 693532234;
_Bool var_70 = (_Bool)0;
signed char var_71 = (signed char)-52;
int var_72 = -2111302143;
signed char var_73 = (signed char)-49;
unsigned long long int arr_0 [21] [21] ;
unsigned long long int arr_1 [21] [21] ;
int arr_2 [20] ;
unsigned long long int arr_3 [20] ;
unsigned char arr_5 [20] [20] ;
unsigned short arr_6 [20] ;
unsigned short arr_7 [20] [20] [20] ;
unsigned char arr_9 [13] ;
signed char arr_12 [13] [13] ;
int arr_16 [13] ;
_Bool arr_18 [13] [13] [13] [13] ;
unsigned long long int arr_22 [13] [13] [13] ;
_Bool arr_28 [25] ;
unsigned long long int arr_29 [25] ;
unsigned long long int arr_30 [25] ;
signed char arr_31 [25] [25] ;
int arr_32 [25] ;
unsigned short arr_33 [25] ;
unsigned long long int arr_34 [25] [25] ;
unsigned long long int arr_35 [25] [25] [25] [25] ;
unsigned long long int arr_36 [25] [25] [25] [25] [25] [25] ;
unsigned char arr_37 [25] [25] [25] [25] ;
int arr_38 [25] ;
signed char arr_39 [25] [25] [25] [25] [25] ;
int arr_41 [25] [25] [25] [25] [25] ;
int arr_42 [25] [25] [25] [25] [25] [25] [25] ;
unsigned short arr_43 [25] [25] ;
unsigned char arr_44 [25] [25] [25] [25] [25] ;
int arr_45 [25] [25] [25] [25] [25] ;
int arr_48 [25] [25] [25] ;
unsigned long long int arr_49 [25] [25] ;
_Bool arr_52 [25] [25] [25] ;
unsigned short arr_53 [25] [25] [25] [25] ;
unsigned long long int arr_54 [25] [25] [25] [25] ;
unsigned long long int arr_55 [25] [25] [25] [25] [25] ;
int arr_56 [25] ;
_Bool arr_58 [25] [25] [25] [25] ;
short arr_61 [25] [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_68 [25] [25] [25] ;
unsigned short arr_73 [25] [25] [25] ;
signed char arr_76 [25] [25] [25] [25] ;
int arr_77 [25] [25] [25] [25] ;
_Bool arr_85 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 4993229059983452001ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 14634537496006704173ULL : 15006497938334799895ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1645957945;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 10598545177671575906ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)54464;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)60608;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 597855981;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 5572346282644960519ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = 3592417488266222610ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = 1510845797644330786ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_31 [i_0] [i_1] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = 1160314420;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = (unsigned short)53639;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_34 [i_0] [i_1] = 13660936265361931370ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 16273973942447117712ULL : 3173959304625611261ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3315151817835276359ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)6 : (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = 1858337489;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-97 : (signed char)-37;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = -1590224266;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 1597178011 : -148353599;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_43 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)57328 : (unsigned short)47595;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)38 : (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 1911645720 : 1101461112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = -399167112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_49 [i_0] [i_1] = 6436795290246038184ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (unsigned short)51298;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = 3116398926142967113ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = 11511957466916562472ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_56 [i_0] = -1100729058;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)12012;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = 11116965203615845063ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)36862 : (unsigned short)31676;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_76 [i_0] [i_1] [i_2] [i_3] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = 631809145;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_85 [i_0] [i_1] = (_Bool)1;
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
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
