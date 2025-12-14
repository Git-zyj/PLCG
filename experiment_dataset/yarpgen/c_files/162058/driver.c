#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6363015263724980585ULL;
unsigned char var_8 = (unsigned char)218;
unsigned short var_9 = (unsigned short)26158;
signed char var_14 = (signed char)108;
unsigned char var_18 = (unsigned char)138;
int zero = 0;
unsigned char var_20 = (unsigned char)89;
signed char var_21 = (signed char)12;
int var_22 = -1026394357;
unsigned int var_23 = 947248553U;
signed char var_24 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
