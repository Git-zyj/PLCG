#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23293;
long long int var_4 = 443234147627593736LL;
int var_9 = 1812293486;
signed char var_13 = (signed char)-46;
unsigned short var_14 = (unsigned short)20229;
int zero = 0;
unsigned long long int var_18 = 6790857229348946944ULL;
int var_19 = -1749415482;
int var_20 = -462288664;
int var_21 = -1385519793;
unsigned long long int arr_0 [13] ;
signed char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 744784741570136663ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)26;
}

void checksum() {
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
