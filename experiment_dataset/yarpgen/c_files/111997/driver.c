#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4586057615749647434LL;
signed char var_1 = (signed char)70;
int var_2 = 867690155;
signed char var_3 = (signed char)-27;
long long int var_6 = 2194953555984961930LL;
short var_7 = (short)-25019;
unsigned int var_8 = 2491710109U;
unsigned long long int var_9 = 2462457238935303913ULL;
int zero = 0;
long long int var_14 = 7222996035791537107LL;
unsigned char var_15 = (unsigned char)73;
unsigned char var_16 = (unsigned char)88;
unsigned char var_17 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
