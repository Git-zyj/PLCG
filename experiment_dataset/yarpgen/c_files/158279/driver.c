#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12559438689117689409ULL;
short var_13 = (short)-15612;
int zero = 0;
unsigned char var_18 = (unsigned char)20;
long long int var_19 = 5264683209895968567LL;
unsigned char var_20 = (unsigned char)109;
unsigned short var_21 = (unsigned short)55102;
unsigned long long int var_22 = 9831056955983642761ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
