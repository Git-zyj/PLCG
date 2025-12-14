#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 3417203056U;
signed char var_13 = (signed char)2;
int zero = 0;
unsigned short var_16 = (unsigned short)50242;
signed char var_17 = (signed char)95;
long long int var_18 = 4632264035192892181LL;
long long int var_19 = 1011520585251697155LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
