#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)54850;
long long int var_6 = 5065797637661162756LL;
unsigned long long int var_11 = 16986214749597108013ULL;
int zero = 0;
unsigned long long int var_16 = 15582569183741978451ULL;
long long int var_17 = 339217326803979793LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
