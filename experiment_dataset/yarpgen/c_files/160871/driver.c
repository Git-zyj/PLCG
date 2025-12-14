#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3011580143U;
long long int var_7 = 8317377285009630465LL;
unsigned char var_9 = (unsigned char)51;
unsigned short var_10 = (unsigned short)45672;
unsigned short var_11 = (unsigned short)31244;
unsigned short var_13 = (unsigned short)51763;
unsigned short var_19 = (unsigned short)38445;
int zero = 0;
unsigned long long int var_20 = 2461788666727788938ULL;
long long int var_21 = -1416502231166354861LL;
unsigned short var_22 = (unsigned short)41337;
void init() {
}

void checksum() {
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
