#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41640;
unsigned char var_6 = (unsigned char)145;
signed char var_7 = (signed char)57;
unsigned char var_9 = (unsigned char)216;
unsigned short var_17 = (unsigned short)8181;
int zero = 0;
int var_19 = 455975047;
short var_20 = (short)29716;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
