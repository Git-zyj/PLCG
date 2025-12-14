#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -134874546;
signed char var_1 = (signed char)-46;
unsigned long long int var_4 = 2681545988678085422ULL;
unsigned long long int var_7 = 16471057463106782472ULL;
unsigned int var_10 = 1098464715U;
int zero = 0;
int var_12 = 1403954282;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 2452801096419200511ULL;
signed char var_15 = (signed char)119;
unsigned long long int var_16 = 15532889387716552807ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
