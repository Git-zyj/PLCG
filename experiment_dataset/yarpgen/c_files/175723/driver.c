#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 16008313046918981147ULL;
unsigned char var_13 = (unsigned char)22;
short var_14 = (short)26493;
unsigned long long int var_16 = 16964884052562069320ULL;
int zero = 0;
unsigned int var_18 = 3621157061U;
unsigned short var_19 = (unsigned short)54283;
short var_20 = (short)25258;
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
