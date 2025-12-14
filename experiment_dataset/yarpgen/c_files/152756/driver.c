#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
long long int var_9 = -1131837765471735979LL;
unsigned short var_13 = (unsigned short)12490;
int var_14 = 926465569;
int zero = 0;
unsigned char var_16 = (unsigned char)186;
int var_17 = 717528417;
unsigned long long int var_18 = 6455556908663146982ULL;
long long int var_19 = 4126678514110432138LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
