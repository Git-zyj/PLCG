#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5098069277749177424LL;
long long int var_1 = 413899054880384719LL;
long long int var_2 = 7867447592843278807LL;
short var_5 = (short)-20207;
unsigned short var_8 = (unsigned short)14863;
short var_9 = (short)-24685;
int zero = 0;
long long int var_10 = -1426897927821656397LL;
int var_11 = 862248208;
int var_12 = -844255293;
signed char var_13 = (signed char)-15;
short var_14 = (short)29034;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
