#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6198757233065396935LL;
unsigned short var_1 = (unsigned short)20664;
unsigned short var_3 = (unsigned short)33739;
int var_5 = -50377279;
long long int var_6 = 293549186542376299LL;
long long int var_7 = 3417596030850251639LL;
int var_9 = 1964461663;
short var_11 = (short)12101;
long long int var_12 = 499886792756286521LL;
short var_13 = (short)-8985;
int zero = 0;
long long int var_15 = -4819518126899894652LL;
int var_16 = -1147998234;
int var_17 = -2096569519;
short var_18 = (short)-19389;
unsigned short var_19 = (unsigned short)38689;
short var_20 = (short)-8603;
short var_21 = (short)31583;
unsigned short arr_0 [20] [20] ;
int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)3570 : (unsigned short)29262;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -1331869667;
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
