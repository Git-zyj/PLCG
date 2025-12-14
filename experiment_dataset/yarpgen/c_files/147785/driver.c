#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16766;
unsigned short var_4 = (unsigned short)6932;
unsigned short var_7 = (unsigned short)37348;
unsigned short var_9 = (unsigned short)57773;
int zero = 0;
unsigned short var_20 = (unsigned short)8943;
unsigned short var_21 = (unsigned short)49802;
void init() {
}

void checksum() {
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
