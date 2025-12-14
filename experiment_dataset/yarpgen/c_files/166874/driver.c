#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-3;
int var_4 = 630779044;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)197;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-10;
short var_20 = (short)-3946;
void init() {
}

void checksum() {
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
