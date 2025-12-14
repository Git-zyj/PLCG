#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15871290953697248860ULL;
short var_1 = (short)22627;
unsigned short var_2 = (unsigned short)63099;
unsigned short var_3 = (unsigned short)52634;
unsigned long long int var_4 = 5956827673222527721ULL;
long long int var_7 = 7744158235355479774LL;
short var_9 = (short)-27935;
unsigned long long int var_10 = 1175184206715267391ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)11431;
short var_21 = (short)-5883;
short var_22 = (short)-17287;
unsigned char var_23 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
