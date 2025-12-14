#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)11;
signed char var_3 = (signed char)-79;
unsigned int var_4 = 3427103186U;
int var_6 = -1620495942;
unsigned long long int var_9 = 17788053583551112805ULL;
signed char var_10 = (signed char)36;
unsigned long long int var_11 = 10221404544698330251ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)27372;
unsigned short var_14 = (unsigned short)11322;
unsigned long long int var_15 = 1232213503832756370ULL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)27515;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
