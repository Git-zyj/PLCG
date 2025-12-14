#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2545087285U;
long long int var_6 = -8951745193515353982LL;
signed char var_9 = (signed char)121;
unsigned int var_12 = 1967421029U;
int zero = 0;
long long int var_17 = 8274893548898451667LL;
unsigned char var_18 = (unsigned char)158;
unsigned char var_19 = (unsigned char)22;
unsigned int var_20 = 4163370830U;
unsigned long long int var_21 = 17606812541038789708ULL;
unsigned char arr_0 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)106;
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
