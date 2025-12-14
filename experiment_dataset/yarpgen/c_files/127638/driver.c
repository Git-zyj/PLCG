#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -933859240;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)743;
long long int var_11 = 7386342551549725340LL;
unsigned long long int var_12 = 5454808845506887405ULL;
signed char var_17 = (signed char)69;
int zero = 0;
unsigned char var_19 = (unsigned char)121;
int var_20 = -1626218781;
unsigned short var_21 = (unsigned short)27136;
void init() {
}

void checksum() {
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
