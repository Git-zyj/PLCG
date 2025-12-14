#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)20;
unsigned short var_8 = (unsigned short)13168;
unsigned long long int var_9 = 7361884649402782739ULL;
unsigned short var_10 = (unsigned short)19439;
int zero = 0;
int var_15 = 1147061583;
unsigned char var_16 = (unsigned char)52;
unsigned short var_17 = (unsigned short)27505;
unsigned short var_18 = (unsigned short)11943;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
