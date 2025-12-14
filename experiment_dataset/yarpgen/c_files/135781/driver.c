#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1380002285U;
signed char var_2 = (signed char)40;
long long int var_6 = 212204972306521940LL;
int var_7 = -1567456432;
long long int var_8 = -4952832104553737006LL;
unsigned char var_11 = (unsigned char)190;
int var_16 = 1490654621;
unsigned int var_17 = 2680867690U;
int zero = 0;
unsigned int var_18 = 1304562373U;
unsigned short var_19 = (unsigned short)17299;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
