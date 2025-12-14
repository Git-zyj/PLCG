#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -355665044;
long long int var_2 = -4013911831486702609LL;
unsigned long long int var_4 = 17445902250051364199ULL;
unsigned long long int var_5 = 16496122526210969671ULL;
short var_8 = (short)6641;
unsigned short var_9 = (unsigned short)38805;
int var_11 = -820979871;
int var_12 = -1726754397;
int var_14 = -1330793847;
short var_15 = (short)31759;
int zero = 0;
unsigned int var_16 = 599858240U;
short var_17 = (short)-1327;
unsigned short var_18 = (unsigned short)10823;
long long int var_19 = 2044888075623513168LL;
unsigned short var_20 = (unsigned short)10197;
short var_21 = (short)-24812;
unsigned short var_22 = (unsigned short)1503;
unsigned short var_23 = (unsigned short)19007;
unsigned long long int var_24 = 12328377310243693450ULL;
int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -255306059;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
