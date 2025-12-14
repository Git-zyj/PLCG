#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -21107098690605771LL;
unsigned short var_9 = (unsigned short)11641;
int var_14 = -40936798;
unsigned char var_16 = (unsigned char)145;
unsigned short var_18 = (unsigned short)53044;
int zero = 0;
int var_19 = -211633408;
unsigned short var_20 = (unsigned short)410;
long long int var_21 = 8228278327004220032LL;
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
