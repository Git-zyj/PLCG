#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
unsigned char var_1 = (unsigned char)127;
_Bool var_2 = (_Bool)0;
long long int var_5 = 7312668813150610852LL;
int zero = 0;
unsigned int var_14 = 1190056848U;
short var_15 = (short)8751;
unsigned short var_16 = (unsigned short)25976;
signed char var_17 = (signed char)-110;
unsigned char var_18 = (unsigned char)76;
unsigned int arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2446465601U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
