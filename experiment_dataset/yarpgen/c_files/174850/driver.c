#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26284;
unsigned int var_1 = 2583706700U;
long long int var_2 = -6847584758895118458LL;
signed char var_4 = (signed char)-22;
long long int var_5 = -7753534709380138763LL;
int var_6 = 1720002297;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)23865;
unsigned char var_11 = (unsigned char)250;
int var_12 = -50108331;
unsigned long long int var_13 = 9389755473521675079ULL;
unsigned int var_14 = 623000332U;
signed char var_15 = (signed char)-39;
unsigned long long int var_16 = 10351438669427865100ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)136;
long long int var_18 = 2367140352999964731LL;
signed char var_19 = (signed char)-47;
int var_20 = -1462789886;
unsigned short var_21 = (unsigned short)6476;
unsigned int arr_0 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 842757382U;
}

void checksum() {
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
