#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-29717;
short var_2 = (short)-4301;
long long int var_4 = 2128897871176657619LL;
int var_5 = 1432564960;
unsigned short var_10 = (unsigned short)47253;
long long int var_11 = -5012087401330495139LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1951374981U;
short var_19 = (short)-4055;
unsigned int var_20 = 3504027178U;
unsigned long long int var_21 = 7933738685179479393ULL;
unsigned long long int var_22 = 3442375672968327729ULL;
unsigned long long int arr_2 [23] ;
unsigned short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 4358582551844061316ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)63225;
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
