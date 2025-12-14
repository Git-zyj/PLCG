#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)195;
int var_3 = -1673387737;
short var_5 = (short)21412;
unsigned short var_8 = (unsigned short)3169;
signed char var_9 = (signed char)69;
short var_11 = (short)962;
int zero = 0;
unsigned long long int var_17 = 10603872020510267307ULL;
unsigned long long int var_18 = 17473343812546559578ULL;
unsigned int var_19 = 2716733198U;
long long int var_20 = -6107405123770463783LL;
unsigned short var_21 = (unsigned short)3053;
unsigned short var_22 = (unsigned short)16494;
unsigned int arr_1 [17] [17] ;
long long int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 3687422525U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -3561195687720209362LL;
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
