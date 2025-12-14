#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19354;
long long int var_4 = 5240655453797697470LL;
unsigned long long int var_5 = 8923935260208751264ULL;
unsigned long long int var_6 = 7711317291314580439ULL;
unsigned char var_8 = (unsigned char)164;
unsigned short var_9 = (unsigned short)12197;
unsigned short var_11 = (unsigned short)25642;
short var_12 = (short)6414;
signed char var_14 = (signed char)-27;
int zero = 0;
short var_16 = (short)30966;
unsigned char var_17 = (unsigned char)4;
_Bool var_18 = (_Bool)0;
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
