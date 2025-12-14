#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3023448899U;
unsigned int var_6 = 2850082469U;
signed char var_11 = (signed char)-75;
unsigned long long int var_17 = 13274880237704327234ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)226;
unsigned long long int var_19 = 9607653682578446839ULL;
unsigned short var_20 = (unsigned short)53690;
unsigned char var_21 = (unsigned char)249;
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
