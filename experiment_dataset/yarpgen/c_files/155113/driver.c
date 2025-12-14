#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23619;
short var_4 = (short)19339;
short var_14 = (short)17442;
int zero = 0;
unsigned short var_20 = (unsigned short)40436;
signed char var_21 = (signed char)-62;
unsigned short var_22 = (unsigned short)41707;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
