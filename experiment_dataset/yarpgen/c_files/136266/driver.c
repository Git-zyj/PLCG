#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)61477;
signed char var_5 = (signed char)10;
unsigned short var_8 = (unsigned short)7909;
unsigned long long int var_9 = 6640994818265677929ULL;
unsigned char var_13 = (unsigned char)150;
int zero = 0;
int var_16 = 393372139;
unsigned int var_17 = 3276272489U;
unsigned int var_18 = 722027427U;
unsigned long long int var_19 = 6664477845870947306ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
