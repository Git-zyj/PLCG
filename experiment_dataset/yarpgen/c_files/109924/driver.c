#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5530409224866178972LL;
int var_2 = -1055060914;
long long int var_3 = -2431756066064477398LL;
signed char var_8 = (signed char)-101;
unsigned short var_10 = (unsigned short)29214;
int zero = 0;
int var_11 = 371350400;
short var_12 = (short)17075;
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
