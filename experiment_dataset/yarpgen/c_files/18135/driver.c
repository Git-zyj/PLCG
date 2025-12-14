#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2606;
long long int var_4 = 8731806767042914125LL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-24;
int zero = 0;
unsigned short var_20 = (unsigned short)61097;
unsigned long long int var_21 = 16509884870749369042ULL;
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
