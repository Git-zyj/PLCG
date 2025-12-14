#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5129084270046492029LL;
unsigned long long int var_4 = 2393971341173462681ULL;
short var_6 = (short)-28217;
long long int var_9 = -5392981059266419192LL;
unsigned char var_12 = (unsigned char)130;
int zero = 0;
unsigned char var_13 = (unsigned char)111;
unsigned long long int var_14 = 10909750804283318437ULL;
long long int var_15 = -7992114962981842464LL;
void init() {
}

void checksum() {
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
