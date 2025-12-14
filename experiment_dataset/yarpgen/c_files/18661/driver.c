#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 381470006203283601LL;
unsigned char var_10 = (unsigned char)34;
int var_16 = 242290519;
int zero = 0;
unsigned char var_17 = (unsigned char)156;
int var_18 = -9019963;
signed char var_19 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
