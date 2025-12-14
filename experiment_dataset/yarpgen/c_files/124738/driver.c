#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13190;
short var_6 = (short)-2274;
short var_10 = (short)-3897;
signed char var_11 = (signed char)-79;
short var_18 = (short)-24493;
int zero = 0;
unsigned char var_19 = (unsigned char)120;
short var_20 = (short)28343;
int var_21 = -1476943276;
short var_22 = (short)-10177;
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
