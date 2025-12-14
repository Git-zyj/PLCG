#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18130;
int var_3 = -332789886;
long long int var_4 = -6926429981411425296LL;
unsigned short var_9 = (unsigned short)54008;
short var_10 = (short)18596;
unsigned int var_13 = 3166344556U;
unsigned int var_15 = 3079834179U;
signed char var_16 = (signed char)-7;
int zero = 0;
int var_19 = -643671834;
unsigned long long int var_20 = 1245387247696389781ULL;
short var_21 = (short)-26016;
unsigned char var_22 = (unsigned char)4;
unsigned int arr_3 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3671339547U;
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
