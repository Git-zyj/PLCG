#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15429821010816458034ULL;
signed char var_1 = (signed char)41;
unsigned int var_2 = 4137129449U;
long long int var_3 = -7812342324448355110LL;
long long int var_4 = 6955921233513379250LL;
short var_6 = (short)-13610;
unsigned long long int var_10 = 7629059150693086663ULL;
unsigned long long int var_11 = 3013074146953636306ULL;
unsigned long long int var_12 = 586000847024050437ULL;
int zero = 0;
long long int var_13 = -3509356393473365606LL;
long long int var_14 = -2037058499196507428LL;
long long int var_15 = -5394426604149606886LL;
int var_16 = 1573178115;
short var_17 = (short)-225;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
