#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16942838945819260682ULL;
unsigned long long int var_8 = 7556337122845765047ULL;
short var_12 = (short)-31039;
int zero = 0;
long long int var_20 = -399191455942275383LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)94;
long long int var_23 = 3195335622674953980LL;
int var_24 = -772053885;
long long int arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -144579820215035973LL;
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
