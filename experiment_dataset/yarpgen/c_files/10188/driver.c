#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8124947085203605655LL;
unsigned short var_6 = (unsigned short)53835;
unsigned int var_8 = 2980702739U;
unsigned short var_11 = (unsigned short)56361;
long long int var_12 = 8432261818149032368LL;
int zero = 0;
short var_18 = (short)-3231;
unsigned char var_19 = (unsigned char)139;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
