#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)1;
unsigned short var_5 = (unsigned short)32949;
unsigned long long int var_6 = 15468972084170864537ULL;
unsigned long long int var_8 = 7070090721603907044ULL;
signed char var_9 = (signed char)119;
short var_10 = (short)-31261;
int zero = 0;
unsigned int var_11 = 3205838348U;
short var_12 = (short)6895;
unsigned char var_13 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
