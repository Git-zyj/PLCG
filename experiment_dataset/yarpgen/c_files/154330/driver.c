#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)105;
unsigned short var_7 = (unsigned short)24406;
long long int var_9 = 6514748979882598250LL;
unsigned short var_11 = (unsigned short)49947;
unsigned char var_12 = (unsigned char)73;
int zero = 0;
unsigned int var_13 = 3998695272U;
long long int var_14 = 6949532948063864040LL;
void init() {
}

void checksum() {
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
