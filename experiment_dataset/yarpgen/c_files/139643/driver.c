#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11334;
signed char var_1 = (signed char)-56;
unsigned short var_3 = (unsigned short)40755;
signed char var_4 = (signed char)-127;
unsigned short var_5 = (unsigned short)33562;
signed char var_6 = (signed char)112;
signed char var_7 = (signed char)-55;
unsigned short var_8 = (unsigned short)64033;
signed char var_9 = (signed char)106;
signed char var_10 = (signed char)79;
unsigned short var_11 = (unsigned short)13329;
signed char var_12 = (signed char)-83;
signed char var_13 = (signed char)66;
signed char var_14 = (signed char)54;
int zero = 0;
signed char var_17 = (signed char)24;
unsigned short var_18 = (unsigned short)45859;
unsigned short var_19 = (unsigned short)50233;
unsigned short var_20 = (unsigned short)10080;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
