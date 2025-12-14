#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8255679795464979927LL;
long long int var_8 = 1798417874923788LL;
long long int var_9 = -1873845696525642873LL;
unsigned char var_16 = (unsigned char)203;
int var_17 = -399828094;
int zero = 0;
unsigned short var_18 = (unsigned short)10155;
unsigned int var_19 = 2727982222U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
