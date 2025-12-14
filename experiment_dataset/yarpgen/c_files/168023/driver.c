#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15487;
unsigned short var_6 = (unsigned short)51620;
int var_11 = 750936006;
int var_12 = -1934991502;
unsigned char var_14 = (unsigned char)197;
int zero = 0;
long long int var_17 = -4728573401585982614LL;
signed char var_18 = (signed char)-45;
short var_19 = (short)-107;
unsigned char var_20 = (unsigned char)17;
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
