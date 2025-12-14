#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18234;
short var_4 = (short)10820;
unsigned int var_5 = 4042466738U;
unsigned char var_6 = (unsigned char)217;
unsigned long long int var_7 = 3948207138095484284ULL;
int var_9 = -440739933;
int zero = 0;
unsigned short var_10 = (unsigned short)39842;
short var_11 = (short)14072;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
