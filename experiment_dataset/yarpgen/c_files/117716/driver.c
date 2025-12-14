#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 702946151;
unsigned long long int var_3 = 6046855163299321452ULL;
int var_4 = 1336383439;
unsigned long long int var_6 = 7142352962265369750ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 342001608;
short var_12 = (short)12854;
unsigned char var_13 = (unsigned char)68;
short var_14 = (short)5741;
long long int var_15 = 1541179778174632512LL;
long long int var_16 = -3470002322940209998LL;
unsigned short arr_0 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)57860;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
