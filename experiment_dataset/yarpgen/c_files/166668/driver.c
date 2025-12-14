#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-86;
long long int var_1 = 7375153151304650570LL;
long long int var_7 = 4321091797000242023LL;
short var_8 = (short)-6355;
long long int var_10 = -3999780654226091551LL;
long long int var_12 = 2833692647485037005LL;
long long int var_13 = 8431237586071743124LL;
int zero = 0;
signed char var_15 = (signed char)-101;
_Bool var_16 = (_Bool)0;
int var_17 = 575638679;
_Bool var_18 = (_Bool)0;
int var_19 = 33595471;
signed char var_20 = (signed char)98;
short var_21 = (short)27337;
_Bool var_22 = (_Bool)0;
int var_23 = -1527916661;
unsigned char arr_0 [22] ;
signed char arr_1 [22] ;
unsigned long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1272761458993786322ULL : 6219255293434969029ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
