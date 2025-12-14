#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5727962659395490504LL;
unsigned char var_6 = (unsigned char)6;
unsigned char var_9 = (unsigned char)226;
int zero = 0;
int var_11 = 1440521667;
long long int var_12 = 122752721337076626LL;
unsigned char var_13 = (unsigned char)193;
void init() {
}

void checksum() {
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
