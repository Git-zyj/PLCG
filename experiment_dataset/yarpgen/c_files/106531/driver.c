#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
unsigned long long int var_2 = 8522035572207594769ULL;
int var_3 = 276708387;
int var_4 = 698973934;
unsigned char var_6 = (unsigned char)117;
unsigned char var_9 = (unsigned char)242;
unsigned long long int var_11 = 2011372250397312037ULL;
unsigned long long int var_13 = 8746707943141216365ULL;
int var_15 = 464028134;
int zero = 0;
unsigned char var_18 = (unsigned char)60;
int var_19 = 618550147;
int var_20 = 441478581;
unsigned long long int var_21 = 17945553549856131607ULL;
int var_22 = 1757803036;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
