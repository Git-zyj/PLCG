#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)253;
long long int var_4 = 4398493984628537091LL;
unsigned short var_5 = (unsigned short)21620;
long long int var_6 = 2710781723158491983LL;
unsigned char var_7 = (unsigned char)55;
unsigned int var_8 = 2761457284U;
unsigned int var_9 = 750797184U;
unsigned short var_11 = (unsigned short)51966;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 15085819715569701774ULL;
long long int var_16 = -8047927231990121709LL;
int zero = 0;
unsigned long long int var_17 = 675420605025422155ULL;
unsigned long long int var_18 = 14829901103513342284ULL;
unsigned char var_19 = (unsigned char)189;
unsigned int var_20 = 371774098U;
unsigned char var_21 = (unsigned char)123;
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
