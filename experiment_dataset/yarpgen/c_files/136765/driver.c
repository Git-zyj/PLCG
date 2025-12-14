#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4980312811726339369LL;
unsigned short var_6 = (unsigned short)16462;
signed char var_10 = (signed char)-38;
unsigned short var_13 = (unsigned short)29710;
int zero = 0;
unsigned char var_19 = (unsigned char)241;
int var_20 = 297819688;
long long int var_21 = -4843773394691533532LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
