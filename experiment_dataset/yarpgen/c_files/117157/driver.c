#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20151;
short var_5 = (short)10037;
short var_6 = (short)-6219;
signed char var_7 = (signed char)-95;
short var_8 = (short)-10705;
unsigned int var_9 = 335325285U;
unsigned char var_10 = (unsigned char)194;
int var_11 = 2085149593;
int zero = 0;
long long int var_12 = 3922008065514850148LL;
short var_13 = (short)-18310;
long long int var_14 = 790741415653055481LL;
short var_15 = (short)-1359;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
