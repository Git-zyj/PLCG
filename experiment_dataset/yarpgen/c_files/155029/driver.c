#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 223976355299522044ULL;
unsigned int var_1 = 1460136708U;
unsigned char var_2 = (unsigned char)89;
signed char var_3 = (signed char)77;
unsigned short var_8 = (unsigned short)38375;
unsigned char var_9 = (unsigned char)165;
int zero = 0;
signed char var_10 = (signed char)124;
long long int var_11 = -2641680228036689563LL;
unsigned short var_12 = (unsigned short)58081;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
