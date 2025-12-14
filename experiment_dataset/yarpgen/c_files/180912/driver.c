#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 924753819;
signed char var_14 = (signed char)54;
int var_16 = -724156293;
signed char var_17 = (signed char)-41;
int zero = 0;
signed char var_20 = (signed char)(-127 - 1);
signed char var_21 = (signed char)-109;
int var_22 = 884434482;
signed char var_23 = (signed char)68;
int var_24 = -1873720706;
int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1003370829;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
