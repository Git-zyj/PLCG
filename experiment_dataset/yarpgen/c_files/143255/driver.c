#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 158206139U;
unsigned char var_1 = (unsigned char)48;
unsigned long long int var_2 = 16556181136062043092ULL;
int var_3 = 620043331;
unsigned short var_4 = (unsigned short)45752;
int var_5 = 1813068161;
unsigned long long int var_6 = 4883039642272266743ULL;
int var_7 = 2116521256;
int var_8 = 480416151;
long long int var_9 = 6199157938155581952LL;
int zero = 0;
unsigned int var_10 = 4254937314U;
unsigned char var_11 = (unsigned char)111;
unsigned char var_12 = (unsigned char)61;
short var_13 = (short)-3297;
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
