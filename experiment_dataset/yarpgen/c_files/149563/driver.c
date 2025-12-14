#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11363886724440580199ULL;
unsigned short var_8 = (unsigned short)12497;
_Bool var_15 = (_Bool)1;
int var_18 = 326457290;
int zero = 0;
signed char var_20 = (signed char)85;
unsigned long long int var_21 = 9581986388322691430ULL;
unsigned char var_22 = (unsigned char)65;
void init() {
}

void checksum() {
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
