#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3325;
signed char var_2 = (signed char)-15;
int var_4 = -2030167708;
unsigned int var_7 = 3597141374U;
short var_9 = (short)29336;
signed char var_12 = (signed char)-124;
int zero = 0;
short var_13 = (short)-24930;
unsigned long long int var_14 = 18408054799540776901ULL;
short var_15 = (short)-11552;
int var_16 = -1322797794;
long long int var_17 = 276472527914886347LL;
long long int var_18 = 7280375014656271573LL;
int var_19 = 1609863009;
int var_20 = 401235119;
unsigned char arr_5 [17] ;
short arr_9 [17] [17] [17] [17] ;
short arr_10 [17] ;
signed char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)16683 : (short)-3146;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (short)11710;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)14;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
