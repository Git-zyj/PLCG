#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)7;
unsigned short var_6 = (unsigned short)49381;
int var_8 = -672598893;
signed char var_10 = (signed char)11;
short var_11 = (short)16038;
unsigned char var_13 = (unsigned char)68;
short var_14 = (short)-4465;
int zero = 0;
unsigned char var_15 = (unsigned char)236;
unsigned long long int var_16 = 10959069013691913719ULL;
long long int var_17 = 3582785161779416688LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
