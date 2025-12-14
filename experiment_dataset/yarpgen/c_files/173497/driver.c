#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1048687614U;
unsigned char var_4 = (unsigned char)239;
short var_5 = (short)-10415;
unsigned int var_6 = 3195659796U;
short var_7 = (short)26117;
unsigned char var_8 = (unsigned char)35;
unsigned short var_9 = (unsigned short)64752;
unsigned short var_10 = (unsigned short)3181;
long long int var_12 = 704504916013829245LL;
unsigned long long int var_13 = 16180585964411995675ULL;
int var_17 = -985901422;
int zero = 0;
unsigned long long int var_19 = 8233218783751228412ULL;
short var_20 = (short)-4096;
short var_21 = (short)169;
unsigned int var_22 = 1079319653U;
unsigned int var_23 = 1245105448U;
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
