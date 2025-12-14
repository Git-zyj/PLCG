#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26316;
int var_1 = -350990846;
unsigned char var_6 = (unsigned char)86;
signed char var_11 = (signed char)-112;
int var_12 = 893341557;
int var_17 = -778934001;
int zero = 0;
int var_18 = 1669845601;
unsigned char var_19 = (unsigned char)163;
int var_20 = -1453809505;
unsigned int var_21 = 2961926684U;
signed char var_22 = (signed char)7;
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
