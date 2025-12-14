#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 675347462270365648LL;
unsigned int var_2 = 1628347959U;
unsigned int var_10 = 109892839U;
unsigned char var_11 = (unsigned char)21;
int zero = 0;
unsigned int var_15 = 3052419247U;
long long int var_16 = 8413814668239517325LL;
short var_17 = (short)-28147;
short var_18 = (short)-22029;
signed char var_19 = (signed char)51;
signed char var_20 = (signed char)-103;
unsigned int arr_0 [25] [25] ;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 2218512786U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)23137;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
