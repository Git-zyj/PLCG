#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24531;
signed char var_9 = (signed char)123;
signed char var_11 = (signed char)-64;
unsigned long long int var_12 = 6745356564026354754ULL;
unsigned short var_16 = (unsigned short)36755;
long long int var_17 = -3987687086645415843LL;
int zero = 0;
unsigned int var_19 = 3340885720U;
long long int var_20 = 8232375882094743832LL;
unsigned short var_21 = (unsigned short)631;
unsigned short var_22 = (unsigned short)37771;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
