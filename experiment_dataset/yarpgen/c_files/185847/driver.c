#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-10;
unsigned long long int var_10 = 4414509222887085377ULL;
unsigned long long int var_11 = 3280296371565172416ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)116;
unsigned short var_14 = (unsigned short)42097;
short var_15 = (short)-28690;
long long int var_16 = -8110839098571417673LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
