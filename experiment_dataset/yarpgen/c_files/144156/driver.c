#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 526034520U;
unsigned char var_1 = (unsigned char)161;
short var_2 = (short)-26182;
unsigned int var_3 = 3998888366U;
int var_5 = 725637747;
unsigned short var_8 = (unsigned short)63335;
unsigned short var_9 = (unsigned short)54476;
int zero = 0;
short var_15 = (short)-10206;
int var_16 = -935138492;
unsigned long long int var_17 = 8348438194570680218ULL;
int var_18 = -875241514;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
