#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 244074915831153819LL;
signed char var_6 = (signed char)-97;
short var_9 = (short)-27190;
long long int var_13 = 5657689827736945638LL;
int zero = 0;
unsigned char var_18 = (unsigned char)53;
signed char var_19 = (signed char)37;
short var_20 = (short)10246;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
