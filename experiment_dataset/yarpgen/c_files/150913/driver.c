#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
unsigned long long int var_1 = 5704712723332035387ULL;
long long int var_3 = -7571389517611948639LL;
unsigned char var_4 = (unsigned char)178;
int var_5 = 480876987;
signed char var_12 = (signed char)-38;
unsigned int var_13 = 587837450U;
unsigned int var_14 = 765877818U;
unsigned long long int var_17 = 1375712175802716199ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)197;
unsigned char var_19 = (unsigned char)12;
unsigned int var_20 = 1072982079U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
