#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 697181767;
unsigned char var_1 = (unsigned char)131;
long long int var_2 = -2452639187768193500LL;
long long int var_3 = -8204694427751731806LL;
long long int var_6 = -7900926326064171513LL;
unsigned char var_8 = (unsigned char)24;
unsigned long long int var_9 = 1464099578849505488ULL;
long long int var_11 = -2800113484736878378LL;
short var_17 = (short)-415;
long long int var_19 = -622087524376275582LL;
int zero = 0;
unsigned short var_20 = (unsigned short)45632;
unsigned char var_21 = (unsigned char)135;
unsigned int var_22 = 1288969334U;
unsigned long long int var_23 = 5142306856167980613ULL;
unsigned long long int var_24 = 1763363110196913645ULL;
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
