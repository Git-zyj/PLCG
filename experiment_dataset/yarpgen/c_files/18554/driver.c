#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 665639866;
unsigned int var_1 = 3159362815U;
unsigned long long int var_17 = 18425939131173298274ULL;
int zero = 0;
unsigned long long int var_19 = 11908659617816132444ULL;
unsigned long long int var_20 = 5515066923341690857ULL;
unsigned short var_21 = (unsigned short)47435;
void init() {
}

void checksum() {
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
