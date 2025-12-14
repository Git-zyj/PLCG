#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 979079597U;
signed char var_2 = (signed char)66;
int var_3 = 1232861699;
int var_5 = -561285844;
int var_6 = -1935169853;
int var_7 = 2116765212;
int var_10 = -702465794;
int zero = 0;
int var_11 = -386630267;
unsigned int var_12 = 3495882628U;
unsigned int var_13 = 1154923151U;
void init() {
}

void checksum() {
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
