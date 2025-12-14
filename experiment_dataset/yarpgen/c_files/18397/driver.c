#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3157310648371443140LL;
short var_2 = (short)26056;
short var_4 = (short)-20202;
signed char var_6 = (signed char)108;
long long int var_7 = -3506082161196356522LL;
int var_11 = 1430362254;
long long int var_12 = -4816205529413008469LL;
long long int var_13 = -5605460973471664280LL;
int zero = 0;
long long int var_14 = -5760866604722146144LL;
signed char var_15 = (signed char)54;
unsigned int var_16 = 3163581263U;
unsigned short var_17 = (unsigned short)35701;
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
