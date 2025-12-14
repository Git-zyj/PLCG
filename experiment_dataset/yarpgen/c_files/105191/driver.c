#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17457;
unsigned char var_3 = (unsigned char)49;
unsigned short var_9 = (unsigned short)55829;
unsigned char var_11 = (unsigned char)188;
int var_12 = 59347831;
long long int var_13 = 5198654639148048216LL;
int zero = 0;
unsigned char var_14 = (unsigned char)157;
unsigned int var_15 = 322792183U;
void init() {
}

void checksum() {
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
