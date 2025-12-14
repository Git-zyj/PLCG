#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32383;
unsigned int var_3 = 2386618609U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)106;
short var_9 = (short)23343;
unsigned long long int var_10 = 18098303514955625364ULL;
unsigned long long int var_11 = 8445964561683220800ULL;
unsigned int var_13 = 2601241148U;
int var_17 = -70830136;
long long int var_19 = 5586110765545615554LL;
int zero = 0;
unsigned long long int var_20 = 3070908118903995453ULL;
signed char var_21 = (signed char)-26;
unsigned int var_22 = 3508045644U;
long long int var_23 = -4354651191394903188LL;
unsigned short var_24 = (unsigned short)10371;
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
