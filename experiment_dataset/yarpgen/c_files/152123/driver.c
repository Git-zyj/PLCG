#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-103;
unsigned long long int var_13 = 5113293458706348474ULL;
int zero = 0;
unsigned long long int var_16 = 16444749555539464453ULL;
unsigned char var_17 = (unsigned char)210;
unsigned long long int var_18 = 3206702006133222138ULL;
long long int var_19 = 2485971166577869182LL;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-76;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
