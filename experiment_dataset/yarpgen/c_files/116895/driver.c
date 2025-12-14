#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)82;
unsigned short var_2 = (unsigned short)45998;
unsigned int var_3 = 178777822U;
unsigned short var_4 = (unsigned short)31483;
signed char var_6 = (signed char)20;
unsigned char var_7 = (unsigned char)32;
unsigned long long int var_9 = 15680527373018240745ULL;
int var_11 = 2082582050;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15375628272698255398ULL;
signed char var_15 = (signed char)96;
void init() {
}

void checksum() {
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
