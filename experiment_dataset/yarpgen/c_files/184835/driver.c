#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)195;
unsigned long long int var_5 = 911160977114368496ULL;
short var_9 = (short)-18496;
long long int var_10 = 1607237368348590572LL;
int zero = 0;
signed char var_13 = (signed char)-73;
unsigned long long int var_14 = 2476173436471526887ULL;
unsigned long long int var_15 = 18317038350139628474ULL;
int var_16 = 422582391;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
