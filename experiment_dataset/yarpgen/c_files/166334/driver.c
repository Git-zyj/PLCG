#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56407;
unsigned long long int var_2 = 9625261548246906045ULL;
short var_3 = (short)32100;
unsigned short var_4 = (unsigned short)38645;
unsigned long long int var_6 = 12444280974551441710ULL;
int var_9 = 1644444623;
int zero = 0;
int var_10 = 1597452622;
unsigned short var_11 = (unsigned short)42572;
unsigned char var_12 = (unsigned char)26;
unsigned short var_13 = (unsigned short)46600;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
