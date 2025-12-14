#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7785586392393337407ULL;
unsigned long long int var_8 = 14425164000366678352ULL;
unsigned long long int var_15 = 13626193166522929004ULL;
int zero = 0;
int var_17 = -1332082618;
int var_18 = 1180728418;
int var_19 = 791277414;
int var_20 = 1246360024;
unsigned long long int var_21 = 16110836533906228252ULL;
unsigned long long int var_22 = 1092151367442574569ULL;
long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -8038796849583254807LL;
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
