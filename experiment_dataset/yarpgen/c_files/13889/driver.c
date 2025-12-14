#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)69;
unsigned long long int var_3 = 4003785615626139783ULL;
long long int var_4 = -1797246644238929106LL;
unsigned long long int var_7 = 6463007427406638732ULL;
unsigned long long int var_12 = 11486890537016544118ULL;
int var_15 = 710182572;
int zero = 0;
unsigned int var_18 = 2855076038U;
unsigned short var_19 = (unsigned short)48500;
long long int var_20 = -2677277386150566189LL;
unsigned char var_21 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
