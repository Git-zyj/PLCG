#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13854245922028338589ULL;
unsigned char var_4 = (unsigned char)10;
unsigned long long int var_6 = 4771012841065294751ULL;
unsigned int var_8 = 1630878473U;
signed char var_11 = (signed char)-89;
int zero = 0;
signed char var_12 = (signed char)-69;
unsigned short var_13 = (unsigned short)14913;
unsigned short var_14 = (unsigned short)20233;
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
