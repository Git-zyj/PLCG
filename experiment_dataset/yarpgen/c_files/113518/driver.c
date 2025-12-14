#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7325946642896071388ULL;
long long int var_4 = 388271328611357399LL;
unsigned short var_11 = (unsigned short)54963;
unsigned int var_14 = 3013593019U;
int var_18 = -1215535870;
int var_19 = -1088264107;
int zero = 0;
signed char var_20 = (signed char)8;
unsigned char var_21 = (unsigned char)42;
unsigned long long int var_22 = 5065911682407022587ULL;
long long int var_23 = 3027919491074465973LL;
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
