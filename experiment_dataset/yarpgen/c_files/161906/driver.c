#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8322539784615428345ULL;
unsigned char var_1 = (unsigned char)188;
unsigned long long int var_2 = 11913360463058175236ULL;
int var_4 = 572442874;
unsigned char var_5 = (unsigned char)204;
_Bool var_6 = (_Bool)0;
long long int var_7 = 6153660380146348404LL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)13119;
unsigned short var_11 = (unsigned short)46743;
unsigned char var_13 = (unsigned char)116;
unsigned long long int var_14 = 4724017941723763628ULL;
unsigned short var_15 = (unsigned short)98;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)140;
long long int var_20 = 3237857477391124019LL;
unsigned char var_21 = (unsigned char)250;
int var_22 = -525449826;
signed char var_23 = (signed char)-127;
unsigned long long int var_24 = 5243012280936789409ULL;
unsigned long long int var_25 = 18217496312017288513ULL;
long long int var_26 = -4428534472985482794LL;
unsigned long long int var_27 = 14380214021496290897ULL;
unsigned char var_28 = (unsigned char)208;
short var_29 = (short)-11889;
unsigned short var_30 = (unsigned short)60365;
short var_31 = (short)21085;
unsigned int var_32 = 3295428622U;
unsigned long long int var_33 = 10648350182475307728ULL;
unsigned long long int var_34 = 3581194107188340450ULL;
unsigned short var_35 = (unsigned short)63953;
unsigned short var_36 = (unsigned short)21956;
_Bool var_37 = (_Bool)0;
unsigned int var_38 = 1701368766U;
unsigned char var_39 = (unsigned char)163;
unsigned char var_40 = (unsigned char)250;
unsigned int var_41 = 3700348259U;
unsigned int var_42 = 19993710U;
short var_43 = (short)-1955;
int var_44 = -717754139;
signed char var_45 = (signed char)-85;
unsigned short var_46 = (unsigned short)4881;
unsigned short var_47 = (unsigned short)42927;
unsigned char var_48 = (unsigned char)137;
unsigned long long int var_49 = 430672318916585063ULL;
long long int var_50 = 7474392454270040396LL;
signed char var_51 = (signed char)-28;
int var_52 = 1883738365;
unsigned long long int var_53 = 9117941725732747872ULL;
unsigned long long int var_54 = 17226414274259482094ULL;
unsigned long long int var_55 = 16927380361132377866ULL;
unsigned long long int var_56 = 6477764485337148249ULL;
unsigned int var_57 = 2934302159U;
unsigned char var_58 = (unsigned char)81;
_Bool var_59 = (_Bool)1;
unsigned long long int var_60 = 9618083674670965742ULL;
unsigned char var_61 = (unsigned char)38;
long long int var_62 = -7221692539081799830LL;
int var_63 = -1448520721;
unsigned long long int var_64 = 4626585104752473283ULL;
long long int var_65 = 6070167093854601410LL;
long long int var_66 = -7626151670053308129LL;
unsigned long long int var_67 = 12788594912964062303ULL;
unsigned short var_68 = (unsigned short)47523;
long long int var_69 = -1053019416311115423LL;
_Bool var_70 = (_Bool)0;
short var_71 = (short)-6169;
signed char var_72 = (signed char)-99;
_Bool var_73 = (_Bool)1;
_Bool var_74 = (_Bool)1;
unsigned char var_75 = (unsigned char)28;
signed char var_76 = (signed char)-6;
unsigned int var_77 = 3537240936U;
signed char var_78 = (signed char)-111;
unsigned int arr_2 [17] ;
signed char arr_3 [25] [25] ;
unsigned long long int arr_4 [25] ;
signed char arr_5 [21] ;
unsigned short arr_6 [21] ;
short arr_7 [21] [21] ;
signed char arr_8 [21] [21] ;
unsigned char arr_9 [21] [21] [21] ;
unsigned int arr_11 [21] ;
int arr_12 [21] [21] [21] [21] ;
unsigned char arr_13 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_14 [21] [21] [21] [21] ;
short arr_15 [21] [21] ;
unsigned long long int arr_16 [21] [21] [21] [21] [21] ;
unsigned int arr_22 [21] [21] [21] [21] [21] ;
signed char arr_24 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_25 [21] [21] [21] [21] [21] [21] [21] ;
unsigned char arr_26 [21] [21] [21] [21] [21] ;
unsigned int arr_31 [21] [21] [21] ;
unsigned long long int arr_32 [21] [21] [21] [21] ;
unsigned char arr_36 [21] [21] ;
signed char arr_52 [21] [21] [21] [21] ;
unsigned long long int arr_53 [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 671580289U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 15511638097573011177ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42939 : (unsigned short)9022;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-25079 : (short)-216;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 1572706787U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -1161329869;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (unsigned char)125 : (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 2084176057U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-28120 : (short)17548;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 15860877412391712223ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 1009463374U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? 3716081181U : 2025001763U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)22 : (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 1969547814U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 14652202164270036257ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 12002578395021623097ULL : 12060430576651232831ULL;
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
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
