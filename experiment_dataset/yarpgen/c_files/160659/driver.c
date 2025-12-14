#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16039206707314009130ULL;
unsigned short var_8 = (unsigned short)55824;
unsigned long long int var_10 = 5943954587692147584ULL;
int zero = 0;
short var_17 = (short)6130;
short var_18 = (short)-21926;
int var_19 = 194902861;
unsigned long long int var_20 = 11185365671148253510ULL;
signed char var_21 = (signed char)-29;
signed char arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-56;
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
