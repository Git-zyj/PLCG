#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)218;
unsigned int var_3 = 3987505706U;
unsigned char var_8 = (unsigned char)69;
long long int var_14 = 3428758499580793263LL;
int zero = 0;
unsigned int var_17 = 629270552U;
unsigned long long int var_18 = 12287687452444187138ULL;
signed char var_19 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
