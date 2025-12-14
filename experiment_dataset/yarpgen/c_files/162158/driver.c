#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2951359315U;
long long int var_3 = -2109293252569529169LL;
unsigned long long int var_6 = 17096690053393538386ULL;
long long int var_8 = -4522562500179357067LL;
long long int var_9 = -7689835840955917564LL;
unsigned int var_12 = 4190957522U;
long long int var_13 = 2915969876099889001LL;
unsigned long long int var_14 = 18229862133811860666ULL;
unsigned char var_16 = (unsigned char)208;
unsigned int var_17 = 3202222044U;
int zero = 0;
signed char var_18 = (signed char)123;
unsigned short var_19 = (unsigned short)31654;
long long int var_20 = -3497293553758080947LL;
unsigned short var_21 = (unsigned short)35178;
unsigned short var_22 = (unsigned short)51389;
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
