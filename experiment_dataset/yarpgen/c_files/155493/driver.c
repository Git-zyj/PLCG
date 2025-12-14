#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2067224442873632273ULL;
unsigned short var_4 = (unsigned short)31589;
unsigned short var_7 = (unsigned short)16253;
unsigned long long int var_13 = 10189212930937111374ULL;
int zero = 0;
long long int var_18 = -8686897181364377800LL;
signed char var_19 = (signed char)-50;
signed char var_20 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
