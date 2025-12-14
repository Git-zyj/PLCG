#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1324746149;
long long int var_2 = -1392261467749075926LL;
short var_9 = (short)17443;
unsigned short var_11 = (unsigned short)61854;
unsigned short var_12 = (unsigned short)36787;
long long int var_15 = -3967099893091785968LL;
unsigned char var_19 = (unsigned char)169;
int zero = 0;
unsigned int var_20 = 1109469469U;
unsigned char var_21 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
