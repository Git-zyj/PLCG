#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)18;
signed char var_3 = (signed char)82;
signed char var_5 = (signed char)-71;
signed char var_6 = (signed char)83;
signed char var_9 = (signed char)12;
int zero = 0;
signed char var_10 = (signed char)-73;
signed char var_11 = (signed char)16;
signed char var_12 = (signed char)52;
signed char var_13 = (signed char)11;
signed char arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-101;
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
