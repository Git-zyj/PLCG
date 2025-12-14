#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)8;
unsigned short var_9 = (unsigned short)20563;
signed char var_11 = (signed char)-37;
int var_15 = -1219275669;
unsigned char var_16 = (unsigned char)25;
int zero = 0;
long long int var_18 = -234978922708353945LL;
unsigned int var_19 = 2532638211U;
void init() {
}

void checksum() {
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
