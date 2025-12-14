#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
int var_3 = 1081309748;
unsigned char var_4 = (unsigned char)132;
int var_7 = 1602040851;
long long int var_8 = -3836323856418205225LL;
long long int var_9 = 7812217269683536150LL;
int zero = 0;
unsigned char var_11 = (unsigned char)214;
int var_12 = 1483256873;
int var_13 = -703428791;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
