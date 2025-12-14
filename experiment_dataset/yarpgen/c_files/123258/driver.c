#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)16;
unsigned long long int var_9 = 3285097350754053204ULL;
int var_10 = 1167311874;
unsigned long long int var_13 = 7715230484411384176ULL;
int zero = 0;
unsigned long long int var_14 = 16763074657824070916ULL;
unsigned long long int var_15 = 9923671309143827970ULL;
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
