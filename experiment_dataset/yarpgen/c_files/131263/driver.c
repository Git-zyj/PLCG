#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-75;
signed char var_10 = (signed char)100;
int zero = 0;
unsigned char var_11 = (unsigned char)136;
unsigned int var_12 = 3500851464U;
signed char var_13 = (signed char)-63;
unsigned short var_14 = (unsigned short)18714;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
