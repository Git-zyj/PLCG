#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11155083242320712756ULL;
int var_3 = -627606207;
signed char var_4 = (signed char)-44;
signed char var_6 = (signed char)-109;
signed char var_7 = (signed char)-58;
signed char var_9 = (signed char)27;
unsigned short var_10 = (unsigned short)49262;
unsigned short var_13 = (unsigned short)11193;
short var_14 = (short)12736;
int zero = 0;
unsigned short var_15 = (unsigned short)36230;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)9477;
signed char var_18 = (signed char)88;
unsigned char var_19 = (unsigned char)56;
unsigned long long int var_20 = 8724775004014996268ULL;
unsigned long long int var_21 = 4065437718536071701ULL;
short arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)4188 : (short)5616;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
