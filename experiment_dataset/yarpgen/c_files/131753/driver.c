#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)64417;
short var_6 = (short)-10136;
unsigned long long int var_7 = 714991203638270498ULL;
short var_8 = (short)14268;
short var_9 = (short)-4661;
int zero = 0;
unsigned short var_10 = (unsigned short)39895;
signed char var_11 = (signed char)-78;
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
