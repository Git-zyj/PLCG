#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)161;
int var_2 = 751358857;
int var_6 = -1685389439;
unsigned char var_7 = (unsigned char)171;
int var_8 = -1592323761;
short var_9 = (short)-4565;
unsigned char var_11 = (unsigned char)204;
signed char var_12 = (signed char)-117;
unsigned char var_14 = (unsigned char)7;
int zero = 0;
short var_15 = (short)-683;
int var_16 = 656804321;
long long int var_17 = 5377635946489525309LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
