#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -152521937;
int var_1 = -708653842;
long long int var_2 = -1548716131150092217LL;
unsigned short var_6 = (unsigned short)39638;
short var_8 = (short)20204;
unsigned short var_9 = (unsigned short)20761;
unsigned char var_10 = (unsigned char)206;
int zero = 0;
short var_12 = (short)-25213;
unsigned char var_13 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
