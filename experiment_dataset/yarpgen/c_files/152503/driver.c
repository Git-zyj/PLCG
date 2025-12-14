#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30898;
unsigned char var_1 = (unsigned char)226;
int var_8 = 1969037550;
unsigned long long int var_9 = 11433946848776413511ULL;
long long int var_10 = 9148959127691942347LL;
long long int var_11 = 9217085569887142606LL;
short var_14 = (short)22468;
unsigned char var_15 = (unsigned char)13;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 5564602552625848568ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
