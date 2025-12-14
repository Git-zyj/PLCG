#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)103;
signed char var_5 = (signed char)114;
signed char var_6 = (signed char)17;
unsigned short var_7 = (unsigned short)47846;
unsigned short var_9 = (unsigned short)32458;
long long int var_10 = 1088086713614180801LL;
int zero = 0;
unsigned long long int var_11 = 3094453680541723524ULL;
signed char var_12 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
