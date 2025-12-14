#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
long long int var_5 = 333103076349123378LL;
long long int var_6 = 712821510294759035LL;
unsigned int var_12 = 838232484U;
long long int var_13 = 5824900896720291033LL;
int zero = 0;
unsigned char var_14 = (unsigned char)88;
unsigned short var_15 = (unsigned short)17413;
void init() {
}

void checksum() {
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
