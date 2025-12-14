#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54394;
unsigned char var_3 = (unsigned char)37;
signed char var_9 = (signed char)-112;
unsigned short var_10 = (unsigned short)11470;
unsigned char var_13 = (unsigned char)14;
unsigned char var_18 = (unsigned char)89;
int zero = 0;
signed char var_20 = (signed char)-54;
int var_21 = 277825072;
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
