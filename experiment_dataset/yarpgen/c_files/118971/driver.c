#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49745;
unsigned char var_8 = (unsigned char)148;
unsigned char var_9 = (unsigned char)114;
long long int var_15 = 4388410362811738131LL;
int zero = 0;
int var_18 = 1196325523;
int var_19 = -1810851097;
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
