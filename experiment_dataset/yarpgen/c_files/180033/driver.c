#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)220;
unsigned long long int var_2 = 7262010448640638516ULL;
unsigned long long int var_3 = 6491152334013286158ULL;
unsigned char var_6 = (unsigned char)60;
long long int var_7 = -5872185992421416563LL;
short var_8 = (short)19039;
unsigned long long int var_9 = 10116897418088425772ULL;
long long int var_11 = -2649336473229571935LL;
unsigned int var_13 = 2743033036U;
int zero = 0;
unsigned char var_14 = (unsigned char)150;
unsigned int var_15 = 835842488U;
unsigned long long int var_16 = 16913054706555377276ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
