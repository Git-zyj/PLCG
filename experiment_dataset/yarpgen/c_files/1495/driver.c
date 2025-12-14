#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -651257440;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 3404380094U;
_Bool var_11 = (_Bool)0;
int var_12 = 2069913910;
long long int var_13 = 322052897518202037LL;
unsigned long long int var_14 = 3516315574646390357ULL;
short var_15 = (short)-19728;
int zero = 0;
unsigned long long int var_17 = 9849630227576011225ULL;
unsigned char var_18 = (unsigned char)210;
unsigned char var_19 = (unsigned char)150;
unsigned int var_20 = 2691595944U;
_Bool var_21 = (_Bool)1;
unsigned int arr_0 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1022845863U;
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
