#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17526;
_Bool var_1 = (_Bool)0;
int var_6 = 605743897;
int var_7 = -1560555433;
signed char var_9 = (signed char)43;
long long int var_12 = -6043725802637629583LL;
_Bool var_13 = (_Bool)0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)14246;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)120;
short var_22 = (short)-6733;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)15;
unsigned long long int var_26 = 17478845287652989665ULL;
unsigned long long int var_27 = 5805539776048823733ULL;
int var_28 = -857555300;
short var_29 = (short)15092;
short var_30 = (short)16818;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 12413848263235258493ULL;
int var_33 = 194659675;
_Bool var_34 = (_Bool)1;
_Bool var_35 = (_Bool)1;
_Bool var_36 = (_Bool)0;
int var_37 = 852918044;
unsigned long long int var_38 = 3777084091133894603ULL;
_Bool arr_0 [13] ;
unsigned long long int arr_1 [13] [13] ;
short arr_2 [13] ;
short arr_5 [25] ;
short arr_6 [25] [25] ;
unsigned long long int arr_8 [13] ;
unsigned long long int arr_9 [13] ;
unsigned long long int arr_11 [13] [13] ;
short arr_12 [13] [13] [13] ;
short arr_13 [13] [13] ;
unsigned long long int arr_14 [13] ;
_Bool arr_24 [13] ;
long long int arr_29 [17] ;
_Bool arr_3 [13] [13] ;
_Bool arr_16 [13] ;
unsigned long long int arr_19 [13] [13] ;
short arr_25 [13] ;
short arr_26 [13] ;
signed char arr_32 [17] ;
unsigned long long int arr_35 [17] [17] [17] ;
_Bool arr_36 [17] [17] ;
long long int arr_37 [17] [17] ;
unsigned long long int arr_38 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 4858005395569545591ULL : 17903585359805910367ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)15055;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)-11606;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (short)25770;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 14476649707746873256ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 16799963062203378018ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 13242159911938847769ULL : 12442247896920853584ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-17941;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-32415;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 5416497535419213246ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_29 [i_0] = 5750748939680145724LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? 12640743539146627624ULL : 15058841187741393371ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (short)-16485 : (short)-6099;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_26 [i_0] = (short)-55;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (signed char)-12 : (signed char)123;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 95485800284349307ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_36 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_37 [i_0] [i_1] = 5385619279116685524LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_38 [i_0] [i_1] = 4326237890314509356ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
