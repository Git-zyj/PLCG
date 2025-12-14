#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-39;
signed char var_8 = (signed char)97;
short var_9 = (short)-19313;
signed char var_13 = (signed char)-60;
int zero = 0;
short var_18 = (short)16682;
unsigned char var_19 = (unsigned char)19;
unsigned int var_20 = 4070010447U;
unsigned int var_21 = 3345073986U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
