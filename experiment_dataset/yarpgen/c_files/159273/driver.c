#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62887;
long long int var_4 = -4664096330183725567LL;
unsigned int var_7 = 3047564099U;
unsigned char var_8 = (unsigned char)161;
int zero = 0;
long long int var_11 = -3625321575385251199LL;
unsigned char var_12 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
