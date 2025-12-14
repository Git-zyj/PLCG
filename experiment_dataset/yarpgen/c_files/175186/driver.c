#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 361743045739973981ULL;
unsigned short var_1 = (unsigned short)37095;
unsigned int var_2 = 4291650216U;
unsigned int var_4 = 2697806842U;
signed char var_5 = (signed char)126;
unsigned short var_9 = (unsigned short)33805;
short var_12 = (short)27900;
short var_14 = (short)-25645;
short var_15 = (short)-17440;
int zero = 0;
unsigned short var_17 = (unsigned short)35040;
unsigned char var_18 = (unsigned char)23;
unsigned short var_19 = (unsigned short)18793;
signed char var_20 = (signed char)-85;
unsigned long long int var_21 = 10719037042087394825ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int arr_2 [10] [10] [10] ;
unsigned short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 5530052172057226231ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)38897;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
