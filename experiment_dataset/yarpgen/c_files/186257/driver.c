#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)25753;
unsigned char var_13 = (unsigned char)18;
int zero = 0;
unsigned char var_19 = (unsigned char)180;
unsigned long long int var_20 = 475084955374334218ULL;
long long int var_21 = -7284002514318909097LL;
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
