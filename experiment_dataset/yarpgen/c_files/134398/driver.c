#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
unsigned char var_1 = (unsigned char)41;
int var_2 = 1430210016;
int var_4 = -1847759784;
unsigned long long int var_7 = 17007137070862902926ULL;
unsigned int var_9 = 2174805575U;
long long int var_10 = 578736319108334478LL;
signed char var_12 = (signed char)38;
int zero = 0;
unsigned char var_18 = (unsigned char)243;
int var_19 = -1212765768;
unsigned int var_20 = 1019580945U;
unsigned long long int var_21 = 17828357908106070770ULL;
long long int var_22 = -6678218516010862883LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
