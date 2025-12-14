#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8554718899803561865ULL;
long long int var_3 = -3916137667661073397LL;
long long int var_6 = 1548985865592759862LL;
long long int var_8 = -360183378209570184LL;
unsigned int var_13 = 3156763260U;
int zero = 0;
signed char var_14 = (signed char)90;
long long int var_15 = 2439407908706235471LL;
unsigned long long int var_16 = 11001040441853187412ULL;
unsigned char var_17 = (unsigned char)7;
short var_18 = (short)23730;
short arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)-14522;
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
