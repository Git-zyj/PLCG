#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24119;
unsigned short var_8 = (unsigned short)28637;
unsigned long long int var_12 = 16562119196816207856ULL;
int zero = 0;
short var_16 = (short)27368;
unsigned short var_17 = (unsigned short)6246;
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
