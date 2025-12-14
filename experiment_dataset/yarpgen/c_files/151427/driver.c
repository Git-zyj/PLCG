#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-121;
unsigned short var_12 = (unsigned short)59816;
unsigned long long int var_15 = 5745890522211383871ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)103;
signed char var_18 = (signed char)-4;
unsigned char var_19 = (unsigned char)139;
unsigned char var_20 = (unsigned char)115;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
