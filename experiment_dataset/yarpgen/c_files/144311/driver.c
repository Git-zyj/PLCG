#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9117589804265003741LL;
unsigned char var_6 = (unsigned char)217;
short var_8 = (short)2860;
long long int var_14 = 2151638677858057070LL;
long long int var_15 = -3408730922064378759LL;
int zero = 0;
long long int var_18 = 5307398087908526424LL;
int var_19 = 310570479;
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
