#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)247;
unsigned int var_7 = 3498193234U;
unsigned short var_17 = (unsigned short)13034;
long long int var_19 = 6763171792055881445LL;
int zero = 0;
unsigned int var_20 = 502560930U;
signed char var_21 = (signed char)-55;
unsigned int var_22 = 3006136191U;
unsigned char var_23 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
