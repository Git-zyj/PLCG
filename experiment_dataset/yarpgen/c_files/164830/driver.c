#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19093;
short var_3 = (short)18449;
long long int var_6 = 8634177203482345692LL;
unsigned short var_9 = (unsigned short)35621;
int zero = 0;
signed char var_18 = (signed char)-3;
int var_19 = 372029882;
void init() {
}

void checksum() {
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
