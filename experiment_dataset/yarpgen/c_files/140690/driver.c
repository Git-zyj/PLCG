#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-98;
long long int var_2 = 4639847723537365589LL;
unsigned long long int var_4 = 3153332043298108529ULL;
unsigned short var_6 = (unsigned short)2522;
signed char var_8 = (signed char)-64;
unsigned short var_9 = (unsigned short)60958;
int zero = 0;
signed char var_11 = (signed char)-13;
int var_12 = 782351485;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
