#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5702860931139023312ULL;
unsigned short var_1 = (unsigned short)38811;
int var_2 = 1831478616;
unsigned long long int var_3 = 4270200840536616834ULL;
long long int var_4 = 2034818150379448152LL;
unsigned short var_5 = (unsigned short)9582;
int var_6 = 1844243444;
long long int var_7 = 3674257750595596456LL;
unsigned long long int var_8 = 10347313262602596685ULL;
signed char var_9 = (signed char)-105;
unsigned long long int var_10 = 1865698171855495802ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)57;
unsigned char var_13 = (unsigned char)67;
int var_14 = -491189976;
unsigned int var_15 = 2634045916U;
unsigned long long int var_16 = 16358406246666948090ULL;
signed char var_17 = (signed char)67;
int zero = 0;
unsigned char var_18 = (unsigned char)75;
int var_19 = -1769898329;
unsigned long long int var_20 = 13166714159556195528ULL;
long long int var_21 = -6825532967736619694LL;
unsigned long long int var_22 = 3872995306790562881ULL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 15764683663293464527ULL;
unsigned short var_25 = (unsigned short)18287;
unsigned int var_26 = 1899018555U;
unsigned char var_27 = (unsigned char)230;
int var_28 = 1912096581;
unsigned char var_29 = (unsigned char)110;
unsigned short var_30 = (unsigned short)46833;
short var_31 = (short)1242;
signed char var_32 = (signed char)66;
long long int var_33 = -141868854021775103LL;
short var_34 = (short)21445;
unsigned long long int var_35 = 7280567353956282981ULL;
unsigned long long int var_36 = 8750244999040286519ULL;
_Bool var_37 = (_Bool)1;
unsigned char var_38 = (unsigned char)73;
int var_39 = -2040412797;
unsigned long long int var_40 = 12812328398264467130ULL;
signed char var_41 = (signed char)58;
unsigned short var_42 = (unsigned short)27772;
unsigned char var_43 = (unsigned char)181;
unsigned char var_44 = (unsigned char)102;
unsigned long long int var_45 = 15503577605129001589ULL;
_Bool var_46 = (_Bool)1;
int var_47 = -1910060350;
unsigned char var_48 = (unsigned char)35;
int var_49 = 789783674;
_Bool var_50 = (_Bool)0;
unsigned int var_51 = 2971136302U;
unsigned short var_52 = (unsigned short)8773;
signed char var_53 = (signed char)-101;
unsigned int var_54 = 37525378U;
unsigned char var_55 = (unsigned char)117;
int var_56 = 834970705;
int var_57 = 297860412;
unsigned short var_58 = (unsigned short)49112;
unsigned long long int var_59 = 7145191106424404003ULL;
unsigned short var_60 = (unsigned short)34060;
long long int var_61 = -2451299057111340356LL;
short var_62 = (short)-29794;
_Bool var_63 = (_Bool)1;
_Bool var_64 = (_Bool)1;
unsigned short var_65 = (unsigned short)53185;
long long int var_66 = 6942039448395118673LL;
long long int var_67 = 2721975521326316845LL;
int var_68 = -1323188295;
signed char var_69 = (signed char)-18;
signed char var_70 = (signed char)112;
unsigned int var_71 = 2807443550U;
long long int arr_32 [17] [17] [17] [17] ;
unsigned char arr_42 [17] [17] ;
short arr_54 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -5884847692004460989LL : 5707025615515000420LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_42 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)71 : (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)27682 : (short)19242;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
