#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6317433581940601529ULL;
long long int var_2 = -4737699148740604795LL;
unsigned char var_5 = (unsigned char)42;
signed char var_6 = (signed char)-44;
unsigned char var_8 = (unsigned char)184;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 18408881905592613607ULL;
short var_12 = (short)-19886;
unsigned long long int var_13 = 16401612682262965942ULL;
_Bool var_14 = (_Bool)0;
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
