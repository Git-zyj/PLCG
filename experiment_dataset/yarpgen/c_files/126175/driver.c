#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13259;
int var_1 = -1385270980;
unsigned long long int var_3 = 6015221950370163427ULL;
unsigned short var_4 = (unsigned short)19585;
unsigned long long int var_5 = 8885434247274231015ULL;
int var_6 = 567571499;
unsigned short var_8 = (unsigned short)57226;
unsigned short var_9 = (unsigned short)52288;
unsigned short var_10 = (unsigned short)43357;
unsigned long long int var_11 = 15727519612397714386ULL;
int zero = 0;
short var_12 = (short)-17101;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 7280248194619472206ULL;
signed char var_15 = (signed char)-78;
int var_16 = 1403341494;
unsigned long long int arr_2 [24] [24] [24] ;
short arr_4 [24] ;
short arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6867644883844978087ULL : 2903332800970475771ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-9745 : (short)-9667;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)15641 : (short)14006;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
