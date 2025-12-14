#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6461391708974320022LL;
long long int var_8 = 6289857387274270622LL;
int zero = 0;
long long int var_12 = -3496299476977669924LL;
signed char var_13 = (signed char)-49;
unsigned int var_14 = 4069166078U;
signed char var_15 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
