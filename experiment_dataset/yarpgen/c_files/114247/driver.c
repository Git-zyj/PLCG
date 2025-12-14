#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61295;
unsigned int var_4 = 2171137057U;
short var_6 = (short)20911;
unsigned char var_7 = (unsigned char)65;
short var_8 = (short)29337;
_Bool var_9 = (_Bool)1;
short var_11 = (short)4467;
unsigned long long int var_12 = 18415984142442666793ULL;
unsigned int var_15 = 357009148U;
unsigned long long int var_16 = 14125339868075951073ULL;
int zero = 0;
short var_19 = (short)22801;
unsigned char var_20 = (unsigned char)108;
short var_21 = (short)-24405;
unsigned long long int var_22 = 16254424488255146403ULL;
unsigned int var_23 = 3814821291U;
unsigned short var_24 = (unsigned short)5889;
unsigned char var_25 = (unsigned char)127;
short arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-14287 : (short)-138;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
