#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 17381390;
unsigned long long int var_1 = 7692162111664099948ULL;
unsigned short var_8 = (unsigned short)43269;
unsigned long long int var_9 = 5470552457941510607ULL;
unsigned int var_10 = 1109123925U;
unsigned short var_11 = (unsigned short)31354;
int zero = 0;
unsigned int var_16 = 2172700838U;
unsigned int var_17 = 4081999861U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
