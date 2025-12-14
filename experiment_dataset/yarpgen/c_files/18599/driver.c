#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)116;
unsigned short var_1 = (unsigned short)15665;
unsigned short var_3 = (unsigned short)52193;
long long int var_4 = -3645064749534084141LL;
unsigned long long int var_6 = 5494856898049006578ULL;
unsigned short var_7 = (unsigned short)12943;
unsigned short var_8 = (unsigned short)29040;
int zero = 0;
short var_10 = (short)29362;
short var_11 = (short)-4432;
unsigned char var_12 = (unsigned char)55;
unsigned char var_13 = (unsigned char)232;
signed char var_14 = (signed char)-105;
unsigned char var_15 = (unsigned char)201;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -7163772462023392759LL : 8199753435164190460LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
