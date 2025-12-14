#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -781480826;
short var_1 = (short)5143;
unsigned char var_4 = (unsigned char)19;
unsigned char var_8 = (unsigned char)251;
unsigned short var_10 = (unsigned short)10647;
int zero = 0;
signed char var_12 = (signed char)-11;
unsigned long long int var_13 = 5495757624323306350ULL;
signed char var_14 = (signed char)79;
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
