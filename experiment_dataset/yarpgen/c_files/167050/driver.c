#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6580665017137416352LL;
unsigned short var_4 = (unsigned short)60436;
unsigned char var_7 = (unsigned char)201;
signed char var_8 = (signed char)84;
signed char var_9 = (signed char)13;
int zero = 0;
long long int var_10 = -1436923769360513382LL;
unsigned char var_11 = (unsigned char)150;
unsigned int var_12 = 1310727222U;
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
