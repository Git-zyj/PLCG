#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5226130903553318225LL;
unsigned long long int var_1 = 3174258264763223462ULL;
unsigned short var_2 = (unsigned short)61777;
int var_3 = 531526785;
unsigned long long int var_4 = 16247198057738712994ULL;
short var_5 = (short)13277;
long long int var_6 = -5043139120805560555LL;
unsigned short var_7 = (unsigned short)57416;
unsigned long long int var_8 = 17964729278099606130ULL;
int var_9 = -416826598;
int zero = 0;
long long int var_10 = -5776205197860094124LL;
unsigned long long int var_11 = 6794678534700962976ULL;
short var_12 = (short)2660;
unsigned short var_13 = (unsigned short)15565;
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
