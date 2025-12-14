#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned char var_4 = (unsigned char)59;
short var_5 = (short)-8047;
unsigned long long int var_6 = 11556039079650890354ULL;
long long int var_7 = -2632146803800245014LL;
signed char var_11 = (signed char)19;
int zero = 0;
unsigned int var_12 = 1631873546U;
long long int var_13 = -2971527321051765718LL;
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
