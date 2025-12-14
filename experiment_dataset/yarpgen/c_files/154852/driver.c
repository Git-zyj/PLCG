#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1097977734;
int var_3 = -839608670;
signed char var_5 = (signed char)-94;
unsigned long long int var_8 = 9136817772916048348ULL;
unsigned int var_9 = 1014534472U;
int zero = 0;
unsigned long long int var_10 = 8046377605948838097ULL;
unsigned long long int var_11 = 14611590200116315241ULL;
unsigned char var_12 = (unsigned char)224;
int var_13 = -218244001;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
