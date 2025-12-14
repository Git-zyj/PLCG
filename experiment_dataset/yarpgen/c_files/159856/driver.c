#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -604234385;
short var_6 = (short)19967;
unsigned char var_12 = (unsigned char)177;
int zero = 0;
long long int var_13 = -1326895074268996511LL;
unsigned short var_14 = (unsigned short)56240;
void init() {
}

void checksum() {
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
