#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-36;
int var_3 = -1588382308;
unsigned char var_8 = (unsigned char)81;
long long int var_13 = -2483174523856412055LL;
unsigned int var_15 = 3312007249U;
int zero = 0;
short var_18 = (short)12502;
short var_19 = (short)-1390;
signed char var_20 = (signed char)31;
unsigned long long int var_21 = 15624531809000529977ULL;
int var_22 = 1665153040;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
