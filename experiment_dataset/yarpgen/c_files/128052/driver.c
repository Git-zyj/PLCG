#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3120301008U;
unsigned short var_2 = (unsigned short)32345;
unsigned int var_3 = 216579157U;
unsigned short var_4 = (unsigned short)57845;
unsigned int var_6 = 980721996U;
unsigned short var_7 = (unsigned short)61906;
unsigned int var_10 = 3924618332U;
int zero = 0;
unsigned int var_11 = 3176373196U;
unsigned int var_12 = 1808374224U;
unsigned int var_13 = 42802103U;
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
