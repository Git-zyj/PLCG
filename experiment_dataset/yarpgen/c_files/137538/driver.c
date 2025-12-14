#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27613;
unsigned char var_1 = (unsigned char)133;
signed char var_8 = (signed char)98;
unsigned int var_10 = 3052611931U;
int zero = 0;
int var_11 = -1715822897;
unsigned short var_12 = (unsigned short)39151;
signed char var_13 = (signed char)-35;
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
