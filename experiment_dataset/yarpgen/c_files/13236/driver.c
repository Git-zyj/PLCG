#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5106072527524925232LL;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-41;
unsigned long long int var_8 = 15277626533767866993ULL;
short var_9 = (short)-4155;
int var_11 = -892026436;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2909597306U;
long long int var_16 = 8859698568320092793LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -9211862611811028957LL;
int var_19 = -1667642569;
long long int var_20 = -2269988833088580984LL;
int var_21 = -820930164;
unsigned int var_22 = 2246044691U;
unsigned int var_23 = 1301542360U;
long long int var_24 = -7045460953370112148LL;
unsigned long long int var_25 = 7212391284075781780ULL;
signed char arr_0 [23] ;
unsigned short arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)33957;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
