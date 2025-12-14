#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5423;
unsigned char var_2 = (unsigned char)181;
unsigned char var_3 = (unsigned char)195;
unsigned char var_5 = (unsigned char)122;
unsigned char var_7 = (unsigned char)135;
unsigned short var_9 = (unsigned short)61599;
int zero = 0;
signed char var_10 = (signed char)40;
short var_11 = (short)32173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
