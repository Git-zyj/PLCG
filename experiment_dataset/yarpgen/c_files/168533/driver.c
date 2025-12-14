#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-123;
unsigned int var_3 = 4246348217U;
long long int var_8 = 7212618009747103450LL;
int zero = 0;
unsigned long long int var_20 = 13514824418538935743ULL;
unsigned int var_21 = 3521008123U;
unsigned short var_22 = (unsigned short)35125;
unsigned char var_23 = (unsigned char)135;
unsigned char var_24 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
