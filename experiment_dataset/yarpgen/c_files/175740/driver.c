#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1075946744U;
int var_1 = -2132895679;
int var_2 = 547775637;
unsigned int var_7 = 3829073984U;
signed char var_10 = (signed char)34;
int zero = 0;
unsigned long long int var_12 = 13328647401912569180ULL;
signed char var_13 = (signed char)-85;
unsigned char var_14 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
