#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1069774874U;
short var_1 = (short)-26931;
unsigned short var_4 = (unsigned short)114;
long long int var_5 = -6204781978530149733LL;
unsigned long long int var_6 = 2199367196431475812ULL;
int var_8 = 1661665215;
long long int var_10 = -7793017787808266680LL;
int zero = 0;
int var_11 = -555570609;
signed char var_12 = (signed char)-76;
unsigned int var_13 = 182370795U;
signed char var_14 = (signed char)-24;
long long int var_15 = -3892568689256231196LL;
void init() {
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
