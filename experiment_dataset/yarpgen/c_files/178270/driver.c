#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17032;
short var_2 = (short)-6911;
short var_4 = (short)-5296;
signed char var_7 = (signed char)-69;
unsigned char var_9 = (unsigned char)114;
int zero = 0;
unsigned short var_12 = (unsigned short)11031;
short var_13 = (short)-16856;
void init() {
}

void checksum() {
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
