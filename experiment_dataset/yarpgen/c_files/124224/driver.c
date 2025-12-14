#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3973625391746632802LL;
unsigned short var_3 = (unsigned short)12538;
unsigned char var_4 = (unsigned char)130;
signed char var_5 = (signed char)116;
unsigned char var_6 = (unsigned char)38;
unsigned long long int var_7 = 245338200690367228ULL;
int zero = 0;
unsigned long long int var_10 = 5982896426727928524ULL;
unsigned char var_11 = (unsigned char)155;
unsigned char var_12 = (unsigned char)139;
long long int var_13 = 9171540967311904226LL;
signed char arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)66;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
