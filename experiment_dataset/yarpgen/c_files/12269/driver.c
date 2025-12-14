#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6110879026189012978LL;
unsigned int var_3 = 2019659373U;
unsigned short var_6 = (unsigned short)60508;
unsigned short var_7 = (unsigned short)65487;
signed char var_11 = (signed char)118;
int zero = 0;
unsigned long long int var_13 = 14693969237965360405ULL;
unsigned short var_14 = (unsigned short)5542;
long long int var_15 = 5547228875175692234LL;
unsigned short var_16 = (unsigned short)34032;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
