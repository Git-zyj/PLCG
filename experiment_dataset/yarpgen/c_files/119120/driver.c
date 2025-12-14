#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65439;
unsigned short var_3 = (unsigned short)20699;
short var_9 = (short)7467;
int var_10 = -10805786;
int zero = 0;
unsigned short var_13 = (unsigned short)20180;
long long int var_14 = 1572549986586905610LL;
void init() {
}

void checksum() {
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
