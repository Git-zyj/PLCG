#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 744630334;
unsigned int var_4 = 3717337660U;
int var_9 = -1779362420;
int zero = 0;
unsigned int var_11 = 3711885929U;
int var_12 = 761042532;
unsigned int var_13 = 4117853854U;
unsigned short var_14 = (unsigned short)9157;
short var_15 = (short)30737;
unsigned int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 3392084234U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
