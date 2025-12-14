#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13159884344820370495ULL;
int zero = 0;
unsigned int var_14 = 4042305699U;
unsigned char var_15 = (unsigned char)235;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 3772089114334699268ULL;
unsigned short var_18 = (unsigned short)55321;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-14308;
unsigned int var_21 = 2377619924U;
int var_22 = -148292183;
unsigned short var_23 = (unsigned short)54050;
unsigned char var_24 = (unsigned char)61;
unsigned char var_25 = (unsigned char)195;
unsigned long long int var_26 = 11608588340617742799ULL;
unsigned long long int var_27 = 10420610090484489470ULL;
short var_28 = (short)5187;
unsigned int var_29 = 3502418293U;
unsigned long long int var_30 = 5607076296568118865ULL;
unsigned short var_31 = (unsigned short)8403;
unsigned long long int var_32 = 6126179949949846685ULL;
short var_33 = (short)29475;
unsigned int var_34 = 3278073133U;
short arr_0 [14] [14] ;
unsigned short arr_1 [14] ;
unsigned long long int arr_2 [14] ;
unsigned char arr_3 [14] ;
unsigned short arr_4 [14] [14] [14] ;
int arr_6 [14] [14] ;
short arr_7 [14] [14] ;
int arr_8 [14] ;
unsigned int arr_9 [14] [14] [14] ;
int arr_12 [14] [14] [14] ;
short arr_13 [14] [14] ;
int arr_14 [14] [14] ;
short arr_15 [14] ;
unsigned int arr_17 [22] ;
unsigned int arr_18 [22] [22] ;
int arr_19 [22] ;
int arr_20 [22] [22] [22] ;
unsigned char arr_22 [22] [22] [22] ;
unsigned long long int arr_23 [22] [22] [22] ;
unsigned short arr_27 [22] ;
unsigned long long int arr_11 [14] ;
unsigned int arr_21 [22] [22] ;
_Bool arr_24 [22] [22] ;
_Bool arr_31 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-3362;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)12999;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 14969204996167168391ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)54898;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 940147007;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (short)957;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 1545524892;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1193650698U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 340347761;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-8654;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = -1779406071;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (short)-14453;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = 354553807U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = 2698523951U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = -772406257;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -1844894398;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 13929724389217734540ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (unsigned short)51021;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 7333425712818711244ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = 3154781487U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_31 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
