#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1986549218;
unsigned char var_2 = (unsigned char)94;
short var_7 = (short)-13736;
int var_8 = -726804757;
unsigned int var_9 = 2599582090U;
unsigned char var_14 = (unsigned char)11;
int zero = 0;
unsigned long long int var_19 = 4435113917743622801ULL;
short var_20 = (short)2885;
unsigned char var_21 = (unsigned char)137;
long long int var_22 = 3898009238655347739LL;
void init() {
}

void checksum() {
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
