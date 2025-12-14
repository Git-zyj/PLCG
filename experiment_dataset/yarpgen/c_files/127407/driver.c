#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5491;
unsigned char var_1 = (unsigned char)111;
unsigned long long int var_4 = 6975870574632363110ULL;
unsigned int var_6 = 3387962750U;
int zero = 0;
unsigned char var_10 = (unsigned char)85;
unsigned char var_11 = (unsigned char)248;
unsigned int var_12 = 3542090652U;
unsigned int var_13 = 1362702264U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
