#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50290;
signed char var_11 = (signed char)-29;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)47282;
unsigned int var_18 = 2730825574U;
long long int var_19 = 4090186305427082763LL;
unsigned char var_20 = (unsigned char)0;
unsigned long long int var_21 = 13609395484923087597ULL;
long long int var_22 = -4645424380062958831LL;
_Bool arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
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
