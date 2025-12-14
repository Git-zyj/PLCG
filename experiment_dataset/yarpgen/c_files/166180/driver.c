#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9329073799382663052ULL;
unsigned char var_10 = (unsigned char)137;
int var_12 = 738015322;
unsigned short var_17 = (unsigned short)5987;
int zero = 0;
unsigned short var_19 = (unsigned short)42116;
int var_20 = -1436989778;
signed char var_21 = (signed char)6;
signed char var_22 = (signed char)-106;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
