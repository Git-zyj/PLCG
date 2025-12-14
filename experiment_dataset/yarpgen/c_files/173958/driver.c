#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4123379152U;
signed char var_3 = (signed char)116;
unsigned short var_6 = (unsigned short)44996;
unsigned short var_11 = (unsigned short)5576;
unsigned long long int var_12 = 1526225111828059268ULL;
int zero = 0;
unsigned int var_18 = 3132669794U;
unsigned long long int var_19 = 3923804584734997402ULL;
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
