#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
unsigned char var_2 = (unsigned char)36;
unsigned char var_4 = (unsigned char)142;
int var_6 = 47779001;
signed char var_10 = (signed char)-72;
int zero = 0;
unsigned long long int var_13 = 3633920584986161374ULL;
signed char var_14 = (signed char)55;
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
