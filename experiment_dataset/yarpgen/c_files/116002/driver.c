#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -610492419;
signed char var_5 = (signed char)-90;
signed char var_8 = (signed char)-110;
signed char var_9 = (signed char)-35;
int zero = 0;
unsigned long long int var_11 = 2121233804353038019ULL;
signed char var_12 = (signed char)70;
unsigned short var_13 = (unsigned short)14235;
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
