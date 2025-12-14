#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)39049;
short var_7 = (short)-27364;
signed char var_8 = (signed char)-64;
unsigned short var_9 = (unsigned short)32486;
unsigned char var_10 = (unsigned char)244;
unsigned char var_12 = (unsigned char)38;
unsigned short var_16 = (unsigned short)64902;
int zero = 0;
long long int var_20 = 6950054580631823141LL;
unsigned short var_21 = (unsigned short)3264;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
