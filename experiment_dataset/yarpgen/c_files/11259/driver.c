#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-24;
long long int var_5 = 528449661787341308LL;
int var_8 = -1956216162;
unsigned char var_11 = (unsigned char)116;
long long int var_13 = -6974581739967287577LL;
int zero = 0;
signed char var_14 = (signed char)-43;
unsigned char var_15 = (unsigned char)190;
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
