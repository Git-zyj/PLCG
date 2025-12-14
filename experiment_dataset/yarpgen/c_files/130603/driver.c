#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-90;
unsigned char var_2 = (unsigned char)225;
long long int var_4 = 3499651865693732149LL;
long long int var_12 = -4915112971658885963LL;
int var_16 = 1961727793;
int zero = 0;
unsigned char var_17 = (unsigned char)57;
long long int var_18 = 9074099738913049858LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
