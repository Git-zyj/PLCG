#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21512;
unsigned long long int var_5 = 236028516212310887ULL;
unsigned long long int var_6 = 4000671991062359356ULL;
short var_7 = (short)-28314;
unsigned long long int var_9 = 17789739002492670024ULL;
unsigned long long int var_10 = 13875499208036437666ULL;
int zero = 0;
int var_11 = -362330767;
int var_12 = 220259598;
unsigned long long int var_13 = 6522927970137505276ULL;
int var_14 = 473681258;
short var_15 = (short)-3251;
short var_16 = (short)-1176;
short var_17 = (short)18893;
short arr_1 [22] ;
unsigned long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-2923;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 15834940588515642966ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
