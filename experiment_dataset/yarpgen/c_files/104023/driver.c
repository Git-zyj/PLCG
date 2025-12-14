#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28671;
unsigned int var_1 = 603450154U;
signed char var_2 = (signed char)90;
unsigned short var_8 = (unsigned short)39123;
int zero = 0;
unsigned long long int var_11 = 4176258811109577514ULL;
signed char var_12 = (signed char)62;
unsigned short var_13 = (unsigned short)2612;
short var_14 = (short)-24613;
unsigned int var_15 = 3877231133U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
