#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6356195456517882807ULL;
short var_3 = (short)25123;
unsigned long long int var_4 = 5742093374095597195ULL;
short var_9 = (short)-32627;
unsigned long long int var_10 = 16110825104996619691ULL;
int zero = 0;
unsigned long long int var_15 = 8201842294680876470ULL;
short var_16 = (short)24482;
unsigned long long int var_17 = 5355768770122201362ULL;
unsigned long long int var_18 = 8842778422699315098ULL;
short var_19 = (short)32228;
short var_20 = (short)17605;
unsigned long long int var_21 = 2662041692659742507ULL;
unsigned long long int var_22 = 5045378336654669739ULL;
unsigned long long int var_23 = 15032789280182876666ULL;
short var_24 = (short)3017;
short var_25 = (short)-12736;
unsigned long long int arr_12 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8149187801853375452ULL : 8484933414764445202ULL;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
