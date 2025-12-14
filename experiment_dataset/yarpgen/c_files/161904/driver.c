#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7514357002427104135LL;
unsigned short var_4 = (unsigned short)42055;
unsigned char var_8 = (unsigned char)14;
signed char var_9 = (signed char)86;
long long int var_12 = -3555576208123513528LL;
int var_13 = -1260758629;
unsigned long long int var_15 = 4803111869132787745ULL;
int zero = 0;
unsigned int var_19 = 3050439416U;
unsigned char var_20 = (unsigned char)226;
long long int var_21 = 3650354572233937684LL;
void init() {
}

void checksum() {
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
