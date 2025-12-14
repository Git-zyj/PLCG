#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6126543654520149395LL;
int var_4 = 902838928;
long long int var_5 = -438792910855201875LL;
long long int var_6 = -5369134479820428820LL;
int zero = 0;
unsigned long long int var_13 = 16776654010604127174ULL;
unsigned long long int var_14 = 10089214591454263182ULL;
unsigned char var_15 = (unsigned char)12;
void init() {
}

void checksum() {
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
