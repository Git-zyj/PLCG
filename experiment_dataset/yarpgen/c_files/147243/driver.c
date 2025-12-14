#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2236003415U;
unsigned char var_2 = (unsigned char)215;
unsigned char var_3 = (unsigned char)125;
unsigned long long int var_4 = 4822191421927291117ULL;
long long int var_6 = -2723321553621067987LL;
unsigned char var_7 = (unsigned char)5;
unsigned short var_8 = (unsigned short)13005;
short var_10 = (short)-28133;
int var_11 = -1509848382;
signed char var_12 = (signed char)37;
int zero = 0;
signed char var_17 = (signed char)-37;
unsigned long long int var_18 = 17549712070328788472ULL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-109;
int var_21 = 1966158155;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
