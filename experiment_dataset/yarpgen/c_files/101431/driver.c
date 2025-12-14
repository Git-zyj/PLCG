#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50392;
short var_2 = (short)-28491;
long long int var_7 = 5870317336880207095LL;
unsigned int var_10 = 944366024U;
unsigned long long int var_11 = 3064626293449143894ULL;
long long int var_12 = 5286631259668804081LL;
unsigned char var_15 = (unsigned char)223;
int zero = 0;
unsigned char var_16 = (unsigned char)208;
unsigned short var_17 = (unsigned short)38710;
unsigned short var_18 = (unsigned short)63026;
signed char var_19 = (signed char)26;
unsigned short arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)25939;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
