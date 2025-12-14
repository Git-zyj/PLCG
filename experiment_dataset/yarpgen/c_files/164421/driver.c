#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3699015761U;
long long int var_6 = -6992429081350414463LL;
long long int var_7 = -2084078485526751426LL;
int var_8 = -228138494;
unsigned char var_9 = (unsigned char)149;
unsigned long long int var_10 = 15284452032385348678ULL;
unsigned char var_11 = (unsigned char)38;
unsigned short var_14 = (unsigned short)45946;
unsigned short var_15 = (unsigned short)49064;
unsigned char var_16 = (unsigned char)158;
unsigned long long int var_17 = 584300367296326983ULL;
unsigned long long int var_18 = 14073475250639367609ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)143;
unsigned char var_20 = (unsigned char)44;
unsigned int var_21 = 1982836465U;
unsigned int var_22 = 4239202777U;
int var_23 = -1991350739;
unsigned int var_24 = 3067314765U;
unsigned char var_25 = (unsigned char)43;
unsigned int var_26 = 1033723417U;
unsigned long long int arr_2 [12] [12] ;
unsigned long long int arr_3 [12] [12] [12] ;
unsigned int arr_5 [12] [12] [12] ;
unsigned int arr_10 [22] ;
long long int arr_11 [22] [22] ;
unsigned long long int arr_14 [16] ;
unsigned char arr_16 [16] ;
unsigned char arr_17 [16] [16] [16] ;
unsigned long long int arr_19 [16] [16] [16] [16] ;
unsigned int arr_20 [16] ;
unsigned char arr_21 [16] ;
unsigned int arr_8 [12] [12] [12] [12] ;
unsigned short arr_9 [12] ;
unsigned long long int arr_12 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 1517262233587947003ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5997776173581549469ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 358707530U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 1766349357U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -3879787313846535615LL : -7680240414692660395LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 4782531529375849958ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 7759250052545762868ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 696283419U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3452131833U : 1584103188U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27433 : (unsigned short)9466;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 4970252254299721132ULL : 4272586197463901386ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
