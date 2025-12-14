#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-17;
unsigned short var_7 = (unsigned short)20325;
long long int var_13 = -5387913244883465771LL;
unsigned long long int var_15 = 1447570230301390984ULL;
unsigned short var_17 = (unsigned short)25505;
signed char var_18 = (signed char)-79;
int zero = 0;
long long int var_19 = -7463917792990446970LL;
unsigned long long int var_20 = 17877590581428791958ULL;
unsigned short var_21 = (unsigned short)32316;
unsigned short var_22 = (unsigned short)49340;
signed char arr_1 [13] [13] ;
short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-29165;
}

void checksum() {
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
