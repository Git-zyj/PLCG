#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4821;
unsigned short var_1 = (unsigned short)61174;
unsigned char var_4 = (unsigned char)149;
short var_6 = (short)19293;
signed char var_10 = (signed char)-93;
int zero = 0;
long long int var_17 = -3098408289437090077LL;
signed char var_18 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
