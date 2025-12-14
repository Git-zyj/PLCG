#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28092;
unsigned long long int var_2 = 3923771841287568343ULL;
short var_3 = (short)-4037;
unsigned char var_4 = (unsigned char)20;
unsigned long long int var_5 = 5879606077790742842ULL;
long long int var_8 = -781999288763450596LL;
int zero = 0;
signed char var_10 = (signed char)108;
signed char var_11 = (signed char)-76;
long long int var_12 = -6069087539052386850LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
