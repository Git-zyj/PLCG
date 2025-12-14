#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11999764512414385827ULL;
signed char var_1 = (signed char)-62;
int var_2 = 645732590;
unsigned int var_3 = 3734002410U;
unsigned long long int var_4 = 2125750233756750000ULL;
long long int var_5 = -7694086137518008294LL;
short var_6 = (short)-9031;
signed char var_8 = (signed char)-44;
unsigned long long int var_9 = 4733071775421746752ULL;
unsigned long long int var_10 = 3920371985951247648ULL;
int var_11 = -1292136224;
long long int var_13 = 7124628474249026986LL;
unsigned short var_14 = (unsigned short)9811;
long long int var_15 = 6962546425602990626LL;
signed char var_16 = (signed char)19;
int zero = 0;
int var_17 = -713782064;
signed char var_18 = (signed char)48;
signed char var_19 = (signed char)4;
short var_20 = (short)-7835;
long long int var_21 = 1780074606212232130LL;
signed char arr_9 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)18;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
