#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -399314886;
unsigned short var_1 = (unsigned short)32752;
unsigned short var_7 = (unsigned short)55534;
long long int var_9 = 8237040128671295308LL;
unsigned char var_11 = (unsigned char)57;
unsigned char var_15 = (unsigned char)49;
signed char var_16 = (signed char)-65;
unsigned char var_17 = (unsigned char)176;
int zero = 0;
long long int var_18 = -1774455267927895873LL;
unsigned short var_19 = (unsigned short)21723;
unsigned long long int var_20 = 6032756175989287969ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
