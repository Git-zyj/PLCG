#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)101;
int var_3 = -375912767;
unsigned char var_13 = (unsigned char)120;
unsigned short var_15 = (unsigned short)3583;
int zero = 0;
signed char var_18 = (signed char)-74;
unsigned short var_19 = (unsigned short)60671;
unsigned short var_20 = (unsigned short)37477;
void init() {
}

void checksum() {
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
