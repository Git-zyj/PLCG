#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)111;
long long int var_7 = -2686310669562405223LL;
unsigned short var_8 = (unsigned short)9645;
int var_9 = 1720344263;
int zero = 0;
unsigned long long int var_12 = 11118110943228818226ULL;
unsigned int var_13 = 720845443U;
unsigned char var_14 = (unsigned char)179;
long long int var_15 = 676033153328531989LL;
long long int var_16 = 8400951020682864283LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
