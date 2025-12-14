#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-3383;
long long int var_7 = 8727735864654235697LL;
short var_10 = (short)24764;
unsigned char var_11 = (unsigned char)108;
int zero = 0;
int var_19 = 1340153021;
unsigned short var_20 = (unsigned short)20107;
long long int var_21 = 7348368130180504212LL;
unsigned long long int var_22 = 4946773109177635841ULL;
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
