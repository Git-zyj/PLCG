#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 8164967601682890411LL;
long long int var_11 = -6980785857928637450LL;
long long int var_16 = -8396223977731232019LL;
int zero = 0;
unsigned char var_17 = (unsigned char)227;
short var_18 = (short)-23054;
short var_19 = (short)-20987;
unsigned char var_20 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
