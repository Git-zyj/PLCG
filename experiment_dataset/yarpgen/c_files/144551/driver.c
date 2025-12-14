#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_14 = (unsigned short)59004;
unsigned char var_16 = (unsigned char)38;
long long int var_18 = 1390204054812782612LL;
int zero = 0;
int var_19 = -1059518862;
signed char var_20 = (signed char)-85;
unsigned char var_21 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
