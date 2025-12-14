#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
unsigned long long int var_1 = 7730824418266247330ULL;
long long int var_2 = 7083804423097137385LL;
int var_3 = -963708265;
unsigned long long int var_6 = 10677273386028209783ULL;
short var_7 = (short)5675;
unsigned char var_8 = (unsigned char)27;
unsigned char var_9 = (unsigned char)183;
int zero = 0;
signed char var_10 = (signed char)-114;
signed char var_11 = (signed char)28;
signed char var_12 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
