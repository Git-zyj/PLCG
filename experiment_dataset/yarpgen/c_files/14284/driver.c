#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)227;
signed char var_4 = (signed char)39;
signed char var_8 = (signed char)-51;
unsigned char var_11 = (unsigned char)2;
signed char var_12 = (signed char)116;
unsigned long long int var_15 = 12961179702832923432ULL;
unsigned long long int var_18 = 12074505109928939250ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)14753;
unsigned int var_20 = 2546050448U;
unsigned long long int var_21 = 4806724261958103100ULL;
unsigned char var_22 = (unsigned char)143;
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
