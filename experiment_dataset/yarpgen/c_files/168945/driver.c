#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17375330763435311313ULL;
int var_5 = -2003310585;
unsigned long long int var_8 = 4910109891289031117ULL;
unsigned long long int var_11 = 5108504163566214396ULL;
unsigned long long int var_13 = 15841263417428019060ULL;
int var_15 = -12811033;
unsigned long long int var_16 = 11860017549474420022ULL;
int var_17 = 3065098;
int zero = 0;
int var_18 = 936516504;
unsigned long long int var_19 = 7127497217488568710ULL;
unsigned long long int var_20 = 4638693272641300744ULL;
unsigned long long int var_21 = 17991579917509496231ULL;
int var_22 = -1641919695;
int var_23 = 1156759288;
int var_24 = -1227848237;
int var_25 = -2029222023;
unsigned long long int arr_0 [11] ;
unsigned long long int arr_4 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3254149371923096377ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 11586926591152866241ULL : 7853206571583818713ULL;
}

void checksum() {
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
