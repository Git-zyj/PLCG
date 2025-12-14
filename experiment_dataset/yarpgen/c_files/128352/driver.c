#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7549479755645783199ULL;
unsigned long long int var_1 = 4245056181882063839ULL;
long long int var_3 = -7987295339347293307LL;
short var_5 = (short)-6361;
unsigned short var_7 = (unsigned short)65172;
int zero = 0;
int var_13 = 1748454906;
int var_14 = 1385258213;
signed char var_15 = (signed char)-112;
unsigned char arr_0 [20] ;
unsigned long long int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)63 : (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 17494287770222065667ULL : 3988176244171239044ULL;
}

void checksum() {
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
