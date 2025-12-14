#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)122;
signed char var_7 = (signed char)-54;
unsigned char var_9 = (unsigned char)204;
short var_11 = (short)-9393;
signed char var_13 = (signed char)12;
unsigned short var_15 = (unsigned short)57188;
signed char var_17 = (signed char)-53;
signed char var_18 = (signed char)-40;
int zero = 0;
long long int var_19 = 7436419771008600193LL;
unsigned short var_20 = (unsigned short)40801;
int var_21 = 297014031;
short var_22 = (short)31061;
void init() {
}

void checksum() {
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
