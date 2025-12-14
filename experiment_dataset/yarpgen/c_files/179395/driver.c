#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)209;
signed char var_1 = (signed char)-70;
unsigned short var_3 = (unsigned short)7228;
signed char var_4 = (signed char)118;
unsigned char var_5 = (unsigned char)27;
int var_6 = 969361492;
short var_7 = (short)17051;
signed char var_8 = (signed char)-69;
long long int var_9 = 2866777211981102868LL;
unsigned long long int var_10 = 17467263744621341428ULL;
int var_11 = 221719929;
long long int var_12 = 5434376278816338834LL;
unsigned short var_13 = (unsigned short)54183;
int zero = 0;
unsigned int var_14 = 2099908457U;
unsigned short var_15 = (unsigned short)8648;
unsigned long long int var_16 = 3712473304293847276ULL;
unsigned char var_17 = (unsigned char)172;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)48170;
unsigned long long int var_20 = 11090919095716150507ULL;
int var_21 = -2114036430;
long long int var_22 = -7106082014805658272LL;
long long int var_23 = -4892209993877325536LL;
signed char var_24 = (signed char)-90;
long long int var_25 = -5200009323524566002LL;
long long int var_26 = -1139096923314869795LL;
unsigned short var_27 = (unsigned short)56001;
short var_28 = (short)4437;
unsigned long long int var_29 = 15745794794010971226ULL;
short var_30 = (short)9346;
long long int var_31 = 2058958048316130132LL;
signed char var_32 = (signed char)-9;
signed char var_33 = (signed char)-52;
unsigned char var_34 = (unsigned char)200;
unsigned char var_35 = (unsigned char)227;
unsigned short var_36 = (unsigned short)28035;
long long int var_37 = 4694339894982601365LL;
unsigned char var_38 = (unsigned char)237;
unsigned char var_39 = (unsigned char)48;
long long int var_40 = 6882608778388651839LL;
short var_41 = (short)22582;
int var_42 = -1948282778;
long long int var_43 = 415345005593189556LL;
unsigned int var_44 = 3469074328U;
unsigned int var_45 = 2874218775U;
unsigned short var_46 = (unsigned short)51030;
unsigned long long int var_47 = 3308555722408043114ULL;
unsigned long long int var_48 = 12461685089292098291ULL;
unsigned int var_49 = 529491020U;
short var_50 = (short)22469;
unsigned int var_51 = 1824700120U;
short var_52 = (short)15825;
long long int var_53 = 4537719267071577202LL;
unsigned long long int var_54 = 13469164304788179227ULL;
signed char var_55 = (signed char)23;
long long int var_56 = -2597935500829698934LL;
unsigned int var_57 = 2888221131U;
_Bool var_58 = (_Bool)1;
long long int var_59 = 5836416278997570064LL;
_Bool var_60 = (_Bool)1;
short var_61 = (short)11966;
signed char var_62 = (signed char)-103;
long long int var_63 = 5686841738603182544LL;
unsigned char var_64 = (unsigned char)16;
unsigned int var_65 = 89898630U;
unsigned long long int var_66 = 4189968958048305493ULL;
short var_67 = (short)-19803;
signed char var_68 = (signed char)-10;
long long int var_69 = 6831522162520240707LL;
unsigned long long int var_70 = 15133233084294674462ULL;
signed char var_71 = (signed char)-25;
unsigned long long int var_72 = 11874414540082333071ULL;
unsigned int var_73 = 4234913486U;
signed char var_74 = (signed char)3;
short var_75 = (short)-1349;
unsigned int arr_2 [11] [11] ;
unsigned char arr_4 [11] ;
signed char arr_5 [11] ;
_Bool arr_6 [11] [11] [11] ;
unsigned int arr_13 [11] ;
unsigned short arr_14 [11] [11] ;
unsigned int arr_16 [11] ;
unsigned char arr_17 [11] [11] ;
unsigned int arr_18 [11] [11] [11] ;
unsigned short arr_19 [11] [11] [11] ;
unsigned long long int arr_22 [11] [11] [11] [11] ;
short arr_30 [11] [11] ;
short arr_34 [11] [11] [11] ;
unsigned long long int arr_35 [11] [11] [11] [11] ;
short arr_38 [11] [11] [11] [11] [11] ;
signed char arr_39 [11] [11] [11] [11] [11] ;
long long int arr_41 [11] [11] ;
int arr_50 [11] [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_53 [11] [11] [11] ;
unsigned int arr_55 [11] [11] ;
unsigned long long int arr_72 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1514565845U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 1836977893U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)26792 : (unsigned short)58592;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 4173348980U : 2625205462U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1475335764U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)7878;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 2250285084324408654ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_30 [i_0] [i_1] = (short)22505;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (short)-27664;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = 11052062414419774639ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)-535 : (short)11298;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_41 [i_0] [i_1] = 2932495583073447611LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1869519372;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 12250455891233056282ULL : 4463296017910673205ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_55 [i_0] [i_1] = 1646429764U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_72 [i_0] [i_1] = 2018669282178349167ULL;
}

void checksum() {
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
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
