#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 545171928;
unsigned long long int var_2 = 5684806435523838219ULL;
unsigned long long int var_5 = 4896656334395119347ULL;
unsigned int var_6 = 339138883U;
long long int var_7 = 4580388160513298595LL;
int var_8 = -1383156196;
signed char var_11 = (signed char)72;
signed char var_13 = (signed char)106;
signed char var_14 = (signed char)-123;
int var_15 = -738299637;
unsigned long long int var_16 = 16458599163423113942ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)107;
signed char var_19 = (signed char)-63;
unsigned char var_20 = (unsigned char)199;
signed char var_21 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
