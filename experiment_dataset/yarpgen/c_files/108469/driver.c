#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42591;
unsigned char var_2 = (unsigned char)223;
unsigned short var_6 = (unsigned short)43613;
unsigned long long int var_7 = 8411439432635757758ULL;
signed char var_8 = (signed char)123;
int zero = 0;
signed char var_16 = (signed char)-24;
unsigned short var_17 = (unsigned short)57609;
void init() {
}

void checksum() {
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
