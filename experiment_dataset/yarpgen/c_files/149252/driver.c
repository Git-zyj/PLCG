#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)51;
long long int var_3 = -6834699460373509414LL;
short var_5 = (short)-12035;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3550642113U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2632694707U;
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
