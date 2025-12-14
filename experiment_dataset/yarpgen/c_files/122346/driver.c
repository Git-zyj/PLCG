#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1520288003;
int var_6 = 708166871;
unsigned int var_7 = 3830674503U;
short var_9 = (short)13214;
unsigned long long int var_10 = 16275649365240015677ULL;
unsigned char var_13 = (unsigned char)252;
int var_14 = -1710758643;
short var_16 = (short)-27021;
int zero = 0;
unsigned int var_19 = 2426286629U;
long long int var_20 = 8623989624407527761LL;
unsigned int var_21 = 1257577332U;
int var_22 = 1574061217;
unsigned int arr_1 [17] ;
int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 4267263286U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1237190170;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
