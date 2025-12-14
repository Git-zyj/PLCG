#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6696690670986507877ULL;
unsigned char var_4 = (unsigned char)196;
long long int var_6 = 4076508956368475400LL;
unsigned short var_13 = (unsigned short)49768;
int zero = 0;
unsigned char var_17 = (unsigned char)65;
unsigned long long int var_18 = 2354650296467100602ULL;
unsigned long long int var_19 = 8529541843631658010ULL;
int var_20 = 633036490;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
