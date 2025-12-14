#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
long long int var_3 = -5211195287777118657LL;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)-112;
signed char var_16 = (signed char)-85;
int zero = 0;
unsigned char var_19 = (unsigned char)169;
unsigned char var_20 = (unsigned char)133;
void init() {
}

void checksum() {
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
