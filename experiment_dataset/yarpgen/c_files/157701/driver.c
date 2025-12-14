#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5533155695942971624LL;
_Bool var_3 = (_Bool)1;
unsigned int var_9 = 3422283364U;
_Bool var_12 = (_Bool)0;
int var_14 = -1627712448;
int var_19 = -604826033;
int zero = 0;
short var_20 = (short)23973;
unsigned long long int var_21 = 14606736989060456232ULL;
unsigned long long int var_22 = 252351494342400185ULL;
short var_23 = (short)7011;
int arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = -789986055;
}

void checksum() {
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
