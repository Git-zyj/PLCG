#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5125;
unsigned short var_1 = (unsigned short)52560;
long long int var_3 = -980361159726837561LL;
int var_6 = 1086794693;
long long int var_7 = 5991334251272029691LL;
unsigned long long int var_8 = 16925437933136695059ULL;
int var_9 = 1196673544;
int var_11 = -24069193;
int zero = 0;
unsigned int var_13 = 3149900658U;
signed char var_14 = (signed char)-108;
unsigned short var_15 = (unsigned short)15984;
unsigned int var_16 = 3395627491U;
unsigned int var_17 = 2746675143U;
short arr_1 [17] ;
long long int arr_7 [17] ;
unsigned int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-8005;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 7396806133388913799LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 3384444586U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
