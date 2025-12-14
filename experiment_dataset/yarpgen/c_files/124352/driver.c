#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 289459814U;
unsigned long long int var_4 = 6469288913539638399ULL;
long long int var_8 = 4138373012466874833LL;
unsigned char var_10 = (unsigned char)82;
unsigned char var_11 = (unsigned char)37;
unsigned char var_13 = (unsigned char)29;
int zero = 0;
long long int var_15 = -2782528573754543497LL;
long long int var_16 = -5556474252236543649LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
