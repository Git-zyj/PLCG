#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15730700722960804487ULL;
signed char var_5 = (signed char)-37;
unsigned char var_8 = (unsigned char)239;
int var_10 = 979525532;
unsigned long long int var_14 = 13657024023951135848ULL;
unsigned long long int var_16 = 13808383287880616915ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)47524;
unsigned int var_20 = 731663565U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
