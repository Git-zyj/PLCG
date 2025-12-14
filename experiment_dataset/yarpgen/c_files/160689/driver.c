#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3544852248446651062LL;
long long int var_1 = -8986942003793088187LL;
long long int var_4 = -4087395978804642621LL;
signed char var_5 = (signed char)-99;
unsigned char var_6 = (unsigned char)158;
signed char var_8 = (signed char)108;
long long int var_9 = 7003699517454186124LL;
signed char var_10 = (signed char)17;
long long int var_12 = 7350357963883935808LL;
unsigned char var_13 = (unsigned char)115;
int zero = 0;
unsigned char var_14 = (unsigned char)180;
signed char var_15 = (signed char)111;
long long int var_16 = -4246043044646876789LL;
signed char var_17 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
