#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
signed char var_1 = (signed char)127;
signed char var_2 = (signed char)106;
short var_3 = (short)23159;
signed char var_4 = (signed char)119;
unsigned int var_5 = 3898365629U;
unsigned long long int var_6 = 894366489605161126ULL;
unsigned long long int var_10 = 18160848860645131750ULL;
unsigned long long int var_11 = 16321762336632169101ULL;
unsigned long long int var_13 = 7823502639818651945ULL;
unsigned int var_18 = 994312464U;
short var_19 = (short)27838;
int zero = 0;
int var_20 = 1583767516;
unsigned long long int var_21 = 8454010199069648821ULL;
unsigned int var_22 = 2681824874U;
short var_23 = (short)18286;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
