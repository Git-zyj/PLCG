#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50649;
unsigned long long int var_2 = 16884779989417609676ULL;
unsigned long long int var_3 = 17963388889033788046ULL;
unsigned long long int var_6 = 12760786953125218590ULL;
int var_8 = 691621889;
unsigned int var_11 = 2925396511U;
int var_12 = -760058919;
int zero = 0;
unsigned long long int var_13 = 6991522182563169111ULL;
int var_14 = -115066799;
unsigned long long int var_15 = 9629440258728070288ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
