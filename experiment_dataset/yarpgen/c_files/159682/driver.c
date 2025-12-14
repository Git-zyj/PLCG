#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)94;
unsigned char var_3 = (unsigned char)240;
unsigned short var_5 = (unsigned short)23801;
unsigned char var_6 = (unsigned char)75;
unsigned short var_9 = (unsigned short)14582;
long long int var_11 = 42165384900279938LL;
int zero = 0;
long long int var_13 = 236724469432585930LL;
long long int var_14 = 7464529591704745144LL;
int var_15 = 321094138;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
