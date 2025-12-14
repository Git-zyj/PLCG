#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4198601031038249105LL;
signed char var_2 = (signed char)38;
signed char var_4 = (signed char)-82;
unsigned long long int var_9 = 17531766096801017108ULL;
short var_10 = (short)-8821;
int zero = 0;
unsigned short var_11 = (unsigned short)47737;
unsigned long long int var_12 = 7994669714613396466ULL;
unsigned char var_13 = (unsigned char)151;
unsigned int var_14 = 556925724U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
