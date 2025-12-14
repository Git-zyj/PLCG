#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49508;
signed char var_3 = (signed char)-11;
unsigned short var_9 = (unsigned short)23740;
unsigned int var_11 = 4240533492U;
int zero = 0;
unsigned int var_12 = 3468449533U;
unsigned int var_13 = 2245009187U;
unsigned short var_14 = (unsigned short)31275;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
