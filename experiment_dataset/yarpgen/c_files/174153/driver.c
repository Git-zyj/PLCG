#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-5;
int var_3 = -1080941318;
unsigned int var_7 = 2599675157U;
int var_11 = -1330541248;
signed char var_14 = (signed char)-51;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1806539205U;
unsigned int var_20 = 974676150U;
unsigned long long int var_21 = 17977590584676590029ULL;
unsigned int var_22 = 3222900715U;
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
