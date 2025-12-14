#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -357984694;
unsigned int var_3 = 104799940U;
unsigned long long int var_5 = 15947611699283471717ULL;
int var_8 = -1880860235;
unsigned long long int var_10 = 13470829254802242907ULL;
int zero = 0;
unsigned long long int var_11 = 10703605738310728582ULL;
unsigned short var_12 = (unsigned short)28870;
signed char var_13 = (signed char)-36;
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
