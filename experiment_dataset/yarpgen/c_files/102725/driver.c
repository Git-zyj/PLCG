#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2711695839U;
unsigned char var_6 = (unsigned char)207;
long long int var_9 = -7746013544992334847LL;
int zero = 0;
unsigned int var_12 = 2404488730U;
int var_13 = -1565465029;
unsigned short var_14 = (unsigned short)47606;
long long int var_15 = 5278835909977664131LL;
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
