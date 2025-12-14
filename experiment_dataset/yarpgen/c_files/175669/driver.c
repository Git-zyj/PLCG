#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-14;
unsigned short var_2 = (unsigned short)22788;
signed char var_4 = (signed char)62;
unsigned short var_5 = (unsigned short)40998;
int var_6 = -182806169;
unsigned short var_9 = (unsigned short)41330;
unsigned char var_17 = (unsigned char)57;
unsigned short var_19 = (unsigned short)26465;
int zero = 0;
unsigned short var_20 = (unsigned short)35088;
unsigned short var_21 = (unsigned short)57239;
unsigned short var_22 = (unsigned short)63505;
unsigned char var_23 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
