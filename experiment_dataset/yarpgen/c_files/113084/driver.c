#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5493;
short var_1 = (short)-17356;
unsigned long long int var_2 = 5058847852648990344ULL;
unsigned long long int var_4 = 1156687633927259375ULL;
long long int var_5 = -5139812008009308411LL;
unsigned int var_6 = 688019548U;
long long int var_7 = 5622242708634925047LL;
int var_9 = 949764735;
signed char var_11 = (signed char)108;
int zero = 0;
unsigned short var_12 = (unsigned short)27736;
signed char var_13 = (signed char)89;
short var_14 = (short)-18007;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
