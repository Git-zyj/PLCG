#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-12600;
signed char var_6 = (signed char)-11;
long long int var_7 = 1193439959069911880LL;
unsigned char var_9 = (unsigned char)180;
int zero = 0;
unsigned long long int var_12 = 6608056887519033342ULL;
unsigned short var_13 = (unsigned short)33945;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
