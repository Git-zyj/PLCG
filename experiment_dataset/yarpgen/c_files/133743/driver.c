#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1680954946U;
short var_3 = (short)18763;
short var_4 = (short)11578;
short var_6 = (short)-2338;
short var_9 = (short)17991;
short var_10 = (short)-935;
signed char var_13 = (signed char)-95;
int zero = 0;
signed char var_17 = (signed char)69;
short var_18 = (short)31101;
unsigned long long int var_19 = 15787745361272021173ULL;
short var_20 = (short)-25519;
signed char var_21 = (signed char)-114;
signed char var_22 = (signed char)112;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)95;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
