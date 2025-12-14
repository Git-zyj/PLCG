#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
long long int var_2 = 6467327255396815467LL;
short var_3 = (short)-21879;
signed char var_4 = (signed char)-39;
unsigned long long int var_7 = 3539517889820982347ULL;
signed char var_8 = (signed char)63;
int var_9 = -1814887545;
signed char var_10 = (signed char)-56;
int zero = 0;
short var_12 = (short)31243;
short var_13 = (short)13790;
short var_14 = (short)-27927;
long long int var_15 = -4337178939860124952LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)13331;
unsigned short var_18 = (unsigned short)19952;
short arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-25822 : (short)16337;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
