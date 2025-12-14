#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60552;
unsigned short var_1 = (unsigned short)1143;
unsigned short var_3 = (unsigned short)31528;
unsigned short var_4 = (unsigned short)63186;
unsigned short var_6 = (unsigned short)23831;
unsigned short var_8 = (unsigned short)19667;
unsigned short var_9 = (unsigned short)27629;
unsigned short var_10 = (unsigned short)14587;
unsigned short var_14 = (unsigned short)37974;
int zero = 0;
unsigned short var_17 = (unsigned short)37791;
unsigned short var_18 = (unsigned short)39694;
unsigned short var_19 = (unsigned short)55829;
unsigned short var_20 = (unsigned short)64549;
unsigned short var_21 = (unsigned short)15202;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
