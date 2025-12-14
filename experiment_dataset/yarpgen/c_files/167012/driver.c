#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1198548056;
signed char var_1 = (signed char)-67;
unsigned short var_2 = (unsigned short)60324;
int var_3 = 1483330671;
int var_7 = 2093072233;
short var_9 = (short)-18326;
int zero = 0;
long long int var_10 = 8868614543355850252LL;
unsigned short var_11 = (unsigned short)62270;
unsigned int var_12 = 3160887586U;
short var_13 = (short)976;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
