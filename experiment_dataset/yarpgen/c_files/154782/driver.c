#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12890;
signed char var_5 = (signed char)9;
long long int var_12 = -8428306354018785002LL;
unsigned int var_13 = 2294616569U;
unsigned int var_17 = 1225266190U;
int zero = 0;
long long int var_20 = 105846571298097978LL;
long long int var_21 = 6606921790187447461LL;
void init() {
}

void checksum() {
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
