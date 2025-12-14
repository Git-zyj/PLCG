#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-117;
unsigned char var_3 = (unsigned char)222;
unsigned short var_4 = (unsigned short)37622;
unsigned long long int var_7 = 13876541557959315284ULL;
short var_9 = (short)-12823;
short var_11 = (short)27678;
int zero = 0;
unsigned long long int var_12 = 15738918894311489126ULL;
short var_13 = (short)-206;
int var_14 = -722165143;
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
