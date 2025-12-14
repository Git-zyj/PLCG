#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned char var_1 = (unsigned char)188;
unsigned long long int var_2 = 9030166801170805443ULL;
unsigned short var_3 = (unsigned short)28023;
unsigned short var_4 = (unsigned short)6035;
unsigned long long int var_5 = 1510865586341764577ULL;
long long int var_6 = 7696008349350448096LL;
long long int var_7 = 4849557402426820977LL;
short var_9 = (short)27888;
unsigned char var_10 = (unsigned char)95;
unsigned char var_11 = (unsigned char)177;
unsigned int var_12 = 1364930982U;
short var_13 = (short)20977;
short var_14 = (short)14319;
int zero = 0;
unsigned char var_15 = (unsigned char)75;
unsigned char var_16 = (unsigned char)112;
long long int var_17 = 3343181909080902657LL;
long long int var_18 = 831649377031727290LL;
short var_19 = (short)-16146;
short var_20 = (short)-4369;
short var_21 = (short)764;
unsigned long long int var_22 = 4667696248612755069ULL;
short var_23 = (short)18881;
unsigned short var_24 = (unsigned short)52124;
short var_25 = (short)-28349;
unsigned char var_26 = (unsigned char)35;
unsigned char var_27 = (unsigned char)8;
long long int var_28 = -5488083392566203691LL;
unsigned int var_29 = 528319U;
unsigned short arr_0 [23] [23] ;
long long int arr_2 [23] ;
long long int arr_5 [23] [23] ;
long long int arr_6 [23] [23] ;
unsigned short arr_8 [23] ;
unsigned long long int arr_10 [23] ;
long long int arr_13 [23] [23] [23] [23] [23] [23] ;
short arr_14 [23] ;
unsigned char arr_16 [23] [23] [23] [23] [23] ;
unsigned short arr_17 [23] [23] [23] ;
short arr_18 [23] ;
unsigned char arr_22 [23] [23] ;
unsigned char arr_29 [23] [23] [23] [23] ;
short arr_11 [23] [23] [23] [23] ;
unsigned char arr_21 [23] ;
unsigned short arr_24 [23] [23] [23] ;
unsigned short arr_30 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)10038;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 8602487388321807039LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -1168504281018073289LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -8975830638204516787LL : -4091271277756942134LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned short)9757;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 16607087654470198487ULL : 17783110601687389263ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1397456266449075346LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (short)7085;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)38142 : (unsigned short)49279;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = (short)23497;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)5812 : (short)26687;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)121 : (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)55626 : (unsigned short)33864;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)41078 : (unsigned short)48168;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
