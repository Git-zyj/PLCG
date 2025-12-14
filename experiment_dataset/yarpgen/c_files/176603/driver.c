#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2065230656901547005LL;
unsigned char var_3 = (unsigned char)203;
unsigned long long int var_6 = 13786415558765354294ULL;
int var_7 = -754432122;
unsigned long long int var_9 = 6806481951487797625ULL;
int zero = 0;
int var_10 = -1124666909;
int var_11 = -1745083576;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
