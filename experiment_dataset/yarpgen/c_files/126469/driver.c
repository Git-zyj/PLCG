#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4260587592U;
long long int var_3 = 7348509264705627416LL;
unsigned long long int var_4 = 1838090301946881662ULL;
long long int var_5 = -163334729672718939LL;
unsigned long long int var_6 = 7121711622951931275ULL;
short var_7 = (short)-31110;
unsigned long long int var_8 = 1409698186289565636ULL;
unsigned long long int var_10 = 7237117302763218489ULL;
long long int var_11 = 7912447567940432822LL;
unsigned long long int var_12 = 15346450546809499306ULL;
int zero = 0;
unsigned long long int var_13 = 7651587178018535328ULL;
unsigned long long int var_14 = 1140864157532267007ULL;
long long int var_15 = -6798557240126373392LL;
unsigned long long int var_16 = 7719543975673861156ULL;
short var_17 = (short)-4826;
long long int var_18 = 7189233920454173014LL;
unsigned long long int var_19 = 17236628947735742352ULL;
unsigned long long int var_20 = 10087465059917059609ULL;
short var_21 = (short)-21525;
unsigned int var_22 = 3973060208U;
unsigned long long int var_23 = 12954023537807110325ULL;
unsigned long long int var_24 = 2697757258474235239ULL;
unsigned long long int var_25 = 17465353096285516831ULL;
unsigned int var_26 = 3054399522U;
unsigned int var_27 = 1312978460U;
short var_28 = (short)-17753;
short var_29 = (short)-1766;
short var_30 = (short)-30724;
unsigned int var_31 = 2392426590U;
unsigned long long int var_32 = 14273451512549042965ULL;
unsigned int var_33 = 4245422386U;
unsigned int var_34 = 92338106U;
unsigned long long int arr_0 [20] ;
short arr_1 [20] ;
short arr_2 [20] ;
long long int arr_3 [20] [20] ;
unsigned long long int arr_5 [20] ;
unsigned long long int arr_6 [20] ;
unsigned long long int arr_8 [20] [20] [20] [20] ;
short arr_9 [20] ;
unsigned long long int arr_13 [20] [20] [20] ;
unsigned long long int arr_18 [20] [20] ;
long long int arr_20 [21] ;
short arr_21 [21] ;
unsigned long long int arr_22 [21] [21] ;
unsigned int arr_25 [21] [21] ;
unsigned long long int arr_26 [21] [21] [21] ;
unsigned long long int arr_27 [21] ;
long long int arr_29 [17] [17] ;
unsigned long long int arr_33 [17] [17] [17] [17] ;
unsigned int arr_40 [22] [22] ;
unsigned long long int arr_41 [22] ;
unsigned long long int arr_42 [22] [22] ;
unsigned long long int arr_43 [22] [22] [22] ;
unsigned long long int arr_44 [22] [22] [22] ;
short arr_45 [22] [22] [22] ;
long long int arr_50 [22] [22] ;
long long int arr_52 [22] ;
unsigned long long int arr_53 [22] ;
unsigned long long int arr_4 [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
unsigned long long int arr_10 [20] [20] [20] ;
long long int arr_11 [20] [20] [20] ;
short arr_14 [20] [20] [20] ;
unsigned int arr_15 [20] [20] ;
unsigned long long int arr_19 [20] [20] ;
unsigned long long int arr_28 [21] ;
long long int arr_35 [17] [17] [17] ;
long long int arr_36 [17] ;
long long int arr_39 [11] ;
unsigned long long int arr_46 [22] [22] [22] ;
short arr_47 [22] [22] ;
unsigned long long int arr_48 [22] [22] [22] ;
unsigned long long int arr_55 [22] ;
unsigned long long int arr_59 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 7159644318019743850ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-15670;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)17601;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 2523953790223631495LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 14479394719714166753ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1629847091421520124ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 5481174498025551516ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (short)25817;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 12013785607145256239ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = 5218482559498378715ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 2313668881183316230LL : 3086324207993046393LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (short)-22665;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_22 [i_0] [i_1] = 12806527866116714130ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = 2486973598U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 7149515270090687393ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 3324521666396280514ULL : 11500228508144620147ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_29 [i_0] [i_1] = 3584181428610093615LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 9566263098523989654ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_40 [i_0] [i_1] = 1246412804U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = 8560763646666838065ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_42 [i_0] [i_1] = 8743693563082005651ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = 9305198666447045147ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 15310120748629660579ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)4934 : (short)-10917;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_50 [i_0] [i_1] = 2534978595483623823LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_52 [i_0] = -5448341096357826263LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_53 [i_0] = 15320785672302574872ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 7156179207850382522ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 18391076187495439707ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1189933115012594914ULL : 15883766813571687367ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 151700124993246428LL : -881100621755718663LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)29758;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = 2103164208U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = 17554713093377130724ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 6914736882033374714ULL : 3966099480278214768ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -37279942511880181LL : -5301085820807569494LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_36 [i_0] = 6573927183911360996LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_39 [i_0] = 2636228769146544438LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3995177938676114854ULL : 3809336546967537299ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_47 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-5313 : (short)-16261;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 12021029922650809513ULL : 4515342096684026455ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? 14248270471192281128ULL : 6434964289732354045ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_59 [i_0] = 5965823429690175447ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_59 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
