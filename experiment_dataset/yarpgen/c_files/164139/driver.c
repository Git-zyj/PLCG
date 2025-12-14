#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-115;
signed char var_4 = (signed char)-51;
signed char var_8 = (signed char)-46;
unsigned short var_10 = (unsigned short)59744;
int zero = 0;
long long int var_12 = -9029410315424041679LL;
signed char var_13 = (signed char)-104;
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
