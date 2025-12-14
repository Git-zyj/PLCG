#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20572;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 355946419U;
long long int var_6 = -39211503501194041LL;
unsigned int var_13 = 761070788U;
unsigned int var_15 = 4143907788U;
int var_16 = -316640459;
unsigned char var_17 = (unsigned char)51;
int zero = 0;
signed char var_18 = (signed char)122;
signed char var_19 = (signed char)-9;
signed char var_20 = (signed char)-90;
int var_21 = 294890883;
short var_22 = (short)14774;
int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 92505411;
}

void checksum() {
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
