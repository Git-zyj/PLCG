#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39823;
long long int var_2 = -7427792281630045894LL;
unsigned char var_3 = (unsigned char)67;
long long int var_5 = 2831560373013043976LL;
long long int var_8 = -2791739081360344355LL;
signed char var_9 = (signed char)-107;
int zero = 0;
unsigned char var_12 = (unsigned char)106;
unsigned short var_13 = (unsigned short)38492;
signed char var_14 = (signed char)-101;
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
