#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-9878;
unsigned char var_8 = (unsigned char)132;
signed char var_9 = (signed char)58;
int zero = 0;
unsigned long long int var_10 = 10254170998007826781ULL;
long long int var_11 = -7647711166257052814LL;
unsigned long long int var_12 = 4172213499058109525ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
