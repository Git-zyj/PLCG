#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52040;
unsigned long long int var_1 = 10736388396886550590ULL;
unsigned long long int var_5 = 4410368378280073678ULL;
unsigned short var_6 = (unsigned short)8077;
unsigned long long int var_7 = 17599755461616689307ULL;
unsigned long long int var_9 = 1234608086214667649ULL;
int zero = 0;
int var_12 = -1811253704;
short var_13 = (short)-18965;
unsigned char var_14 = (unsigned char)243;
long long int var_15 = 3360932948295533186LL;
int var_16 = 4638614;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
