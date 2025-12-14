#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2531908085871525067LL;
int var_3 = 510758532;
unsigned int var_4 = 2668162627U;
unsigned long long int var_5 = 16986890495763377937ULL;
unsigned long long int var_9 = 14396565685707725648ULL;
int var_12 = 1068771030;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3302279216U;
signed char var_15 = (signed char)-61;
short var_16 = (short)-10433;
unsigned long long int var_17 = 15571997401780270318ULL;
unsigned long long int var_18 = 9140949566211089305ULL;
_Bool arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
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
