#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
unsigned char var_1 = (unsigned char)66;
int var_2 = -809200170;
unsigned short var_4 = (unsigned short)46066;
unsigned short var_10 = (unsigned short)40491;
int var_11 = -79258373;
signed char var_13 = (signed char)116;
long long int var_14 = 2502017707642726382LL;
signed char var_15 = (signed char)4;
unsigned char var_17 = (unsigned char)205;
int zero = 0;
signed char var_20 = (signed char)-88;
long long int var_21 = 5977479620645720545LL;
unsigned short var_22 = (unsigned short)7309;
unsigned short var_23 = (unsigned short)19974;
unsigned char var_24 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
