#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 701394351U;
unsigned int var_6 = 1061518059U;
unsigned int var_8 = 995835047U;
unsigned short var_11 = (unsigned short)29283;
unsigned int var_12 = 885841544U;
unsigned int var_13 = 1037559151U;
int zero = 0;
unsigned short var_15 = (unsigned short)7726;
unsigned short var_16 = (unsigned short)60908;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
