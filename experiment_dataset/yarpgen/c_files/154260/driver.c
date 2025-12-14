#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61230;
unsigned char var_2 = (unsigned char)218;
unsigned short var_3 = (unsigned short)4601;
unsigned short var_4 = (unsigned short)14914;
signed char var_6 = (signed char)-37;
int var_8 = -751089645;
int zero = 0;
unsigned long long int var_12 = 4487937567894905067ULL;
signed char var_13 = (signed char)-63;
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
