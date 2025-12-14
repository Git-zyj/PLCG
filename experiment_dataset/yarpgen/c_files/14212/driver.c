#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
unsigned char var_2 = (unsigned char)98;
unsigned char var_3 = (unsigned char)195;
short var_5 = (short)27391;
int zero = 0;
int var_12 = -60202113;
unsigned short var_13 = (unsigned short)64676;
unsigned short var_14 = (unsigned short)40177;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
