#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2863868513498129095LL;
short var_7 = (short)20585;
int zero = 0;
unsigned char var_10 = (unsigned char)123;
long long int var_11 = 2767654560069548542LL;
unsigned int var_12 = 3872174379U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
