#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)131;
unsigned char var_5 = (unsigned char)231;
signed char var_9 = (signed char)98;
signed char var_10 = (signed char)-80;
signed char var_11 = (signed char)64;
unsigned long long int var_13 = 5203015022718445221ULL;
unsigned long long int var_14 = 16169969756739253394ULL;
unsigned long long int var_15 = 8314095410881685232ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)117;
signed char var_19 = (signed char)-3;
signed char var_20 = (signed char)-25;
unsigned long long int var_21 = 8280723206580982648ULL;
void init() {
}

void checksum() {
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
