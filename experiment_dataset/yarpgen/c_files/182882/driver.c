#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
_Bool var_2 = (_Bool)0;
int var_3 = 475240003;
unsigned short var_4 = (unsigned short)38297;
unsigned char var_5 = (unsigned char)15;
_Bool var_6 = (_Bool)1;
long long int var_7 = -3416607966323106825LL;
unsigned short var_9 = (unsigned short)10814;
unsigned long long int var_10 = 15706258531024973564ULL;
unsigned int var_11 = 276391405U;
long long int var_13 = 5565478987778514677LL;
unsigned int var_14 = 115922326U;
unsigned short var_16 = (unsigned short)47173;
int zero = 0;
signed char var_17 = (signed char)56;
short var_18 = (short)-32753;
signed char var_19 = (signed char)-79;
void init() {
}

void checksum() {
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
