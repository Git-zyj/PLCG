#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7202857197930380693LL;
int var_4 = 449728655;
long long int var_9 = -4108381906268077314LL;
unsigned char var_10 = (unsigned char)55;
unsigned char var_11 = (unsigned char)209;
int var_12 = 140370454;
int zero = 0;
unsigned char var_15 = (unsigned char)178;
int var_16 = 805782637;
int var_17 = -1892792138;
unsigned short var_18 = (unsigned short)55322;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
