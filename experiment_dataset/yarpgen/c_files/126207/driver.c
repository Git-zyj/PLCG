#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)24020;
int var_8 = 751776500;
int var_9 = 407319558;
int var_14 = 1836373156;
unsigned short var_16 = (unsigned short)62452;
int zero = 0;
short var_17 = (short)10670;
short var_18 = (short)21399;
short var_19 = (short)32152;
unsigned short var_20 = (unsigned short)25520;
unsigned long long int var_21 = 11168122716134265631ULL;
unsigned short arr_2 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)23223 : (unsigned short)57083;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
