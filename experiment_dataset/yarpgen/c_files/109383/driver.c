#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1688;
unsigned short var_1 = (unsigned short)29450;
unsigned int var_2 = 388709145U;
unsigned long long int var_7 = 8918597034644621097ULL;
unsigned int var_9 = 2033504843U;
unsigned short var_11 = (unsigned short)2825;
int var_13 = 2049255058;
int var_14 = -928016610;
int zero = 0;
unsigned short var_16 = (unsigned short)50577;
unsigned long long int var_17 = 12493395376539404284ULL;
unsigned int var_18 = 4201954267U;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)15826;
}

void checksum() {
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
