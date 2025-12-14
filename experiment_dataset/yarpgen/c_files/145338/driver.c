#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)108;
unsigned char var_4 = (unsigned char)76;
unsigned short var_6 = (unsigned short)13835;
unsigned long long int var_9 = 7316754002750820178ULL;
int zero = 0;
int var_10 = -865731756;
unsigned short var_11 = (unsigned short)10464;
unsigned long long int var_12 = 7616812649968379616ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
