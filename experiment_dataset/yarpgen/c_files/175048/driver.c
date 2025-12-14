#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29909;
long long int var_1 = -6056661573747805723LL;
signed char var_2 = (signed char)111;
unsigned int var_6 = 2502298467U;
int var_8 = -2074975620;
unsigned short var_10 = (unsigned short)27097;
unsigned long long int var_12 = 2808192634454766847ULL;
long long int var_14 = 6517036526793817364LL;
unsigned short var_16 = (unsigned short)58112;
long long int var_17 = 6572448112551010842LL;
unsigned long long int var_18 = 4094174096853664498ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)145;
unsigned char var_21 = (unsigned char)23;
void init() {
}

void checksum() {
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
