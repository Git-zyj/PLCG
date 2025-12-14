#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15486884317863060246ULL;
unsigned short var_1 = (unsigned short)20669;
unsigned short var_3 = (unsigned short)23649;
unsigned short var_4 = (unsigned short)54787;
unsigned short var_9 = (unsigned short)31480;
unsigned short var_10 = (unsigned short)48676;
signed char var_11 = (signed char)-74;
unsigned short var_13 = (unsigned short)57520;
int zero = 0;
unsigned short var_14 = (unsigned short)6433;
unsigned short var_15 = (unsigned short)13724;
unsigned short var_16 = (unsigned short)429;
unsigned long long int var_17 = 12342892872793428262ULL;
unsigned short var_18 = (unsigned short)32613;
unsigned long long int var_19 = 8267798142202668374ULL;
unsigned short var_20 = (unsigned short)22110;
unsigned short var_21 = (unsigned short)29063;
unsigned short var_22 = (unsigned short)33461;
unsigned long long int var_23 = 5575154180913385516ULL;
signed char arr_1 [20] ;
unsigned short arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)7133 : (unsigned short)32362;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
