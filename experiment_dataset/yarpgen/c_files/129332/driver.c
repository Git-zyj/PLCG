#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)28;
signed char var_5 = (signed char)98;
signed char var_6 = (signed char)-8;
unsigned char var_8 = (unsigned char)224;
unsigned short var_9 = (unsigned short)52553;
long long int var_13 = -6915211580518611989LL;
signed char var_14 = (signed char)-25;
int zero = 0;
long long int var_16 = -7134670278952556930LL;
signed char var_17 = (signed char)41;
long long int var_18 = 8552709965748314923LL;
void init() {
}

void checksum() {
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
