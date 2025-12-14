#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)11;
unsigned int var_5 = 2915517864U;
signed char var_8 = (signed char)-27;
short var_10 = (short)-20437;
short var_15 = (short)18017;
int zero = 0;
short var_17 = (short)-662;
unsigned char var_18 = (unsigned char)123;
long long int var_19 = 5249690244717863227LL;
unsigned char var_20 = (unsigned char)189;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
