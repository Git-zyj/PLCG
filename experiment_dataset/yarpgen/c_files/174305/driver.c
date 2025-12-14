#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
unsigned char var_2 = (unsigned char)36;
unsigned long long int var_4 = 6656841207894178802ULL;
unsigned char var_6 = (unsigned char)153;
signed char var_8 = (signed char)-110;
int zero = 0;
int var_15 = -154635744;
unsigned char var_16 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
