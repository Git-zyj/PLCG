#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26682;
signed char var_4 = (signed char)121;
unsigned int var_8 = 2080053331U;
unsigned int var_15 = 1066296703U;
signed char var_18 = (signed char)-11;
int zero = 0;
unsigned char var_20 = (unsigned char)249;
short var_21 = (short)-27933;
void init() {
}

void checksum() {
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
