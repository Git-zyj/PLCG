#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63196;
unsigned short var_2 = (unsigned short)14863;
unsigned char var_4 = (unsigned char)208;
long long int var_6 = 3574958568458090121LL;
long long int var_7 = 4331983411752499578LL;
unsigned char var_9 = (unsigned char)12;
int zero = 0;
unsigned char var_12 = (unsigned char)51;
unsigned char var_13 = (unsigned char)224;
void init() {
}

void checksum() {
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
