#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8784060384373801595LL;
unsigned short var_6 = (unsigned short)28190;
int var_7 = -1294643401;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 329283098726089966ULL;
unsigned char var_14 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
