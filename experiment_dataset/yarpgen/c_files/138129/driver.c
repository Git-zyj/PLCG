#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4551236394123439968LL;
signed char var_5 = (signed char)46;
unsigned int var_6 = 2048495096U;
short var_7 = (short)-29896;
unsigned short var_8 = (unsigned short)46313;
long long int var_9 = -3974072736436245649LL;
unsigned short var_10 = (unsigned short)61325;
int zero = 0;
long long int var_11 = -5508894092657271681LL;
unsigned long long int var_12 = 3518076430037207849ULL;
void init() {
}

void checksum() {
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
