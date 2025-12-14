#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
signed char var_8 = (signed char)102;
short var_15 = (short)-20740;
int zero = 0;
unsigned long long int var_19 = 10016622402282074366ULL;
int var_20 = -1506440100;
signed char var_21 = (signed char)-62;
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
