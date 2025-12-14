#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20614;
long long int var_2 = 21198285978171781LL;
short var_4 = (short)23923;
unsigned long long int var_7 = 12347581751955103845ULL;
long long int var_9 = 6998014406186358341LL;
int zero = 0;
unsigned char var_14 = (unsigned char)109;
unsigned int var_15 = 4092539916U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
