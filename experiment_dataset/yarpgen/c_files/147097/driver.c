#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1836333254;
unsigned int var_3 = 3388040838U;
signed char var_13 = (signed char)-56;
unsigned int var_14 = 63265462U;
signed char var_15 = (signed char)-94;
int zero = 0;
long long int var_18 = -804424596795766321LL;
unsigned short var_19 = (unsigned short)43406;
long long int var_20 = -5133836634707605815LL;
void init() {
}

void checksum() {
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
