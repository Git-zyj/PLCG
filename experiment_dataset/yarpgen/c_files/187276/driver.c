#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2092875066U;
unsigned char var_1 = (unsigned char)146;
unsigned short var_2 = (unsigned short)39388;
unsigned int var_4 = 7878960U;
unsigned char var_5 = (unsigned char)11;
unsigned long long int var_6 = 14160199826232665625ULL;
short var_7 = (short)6756;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-9563;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 7850844892165413954ULL;
unsigned long long int var_13 = 13755610335765058473ULL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_18 = 14585261317651106220ULL;
int zero = 0;
unsigned long long int var_19 = 4888657203668516628ULL;
unsigned int var_20 = 4244735739U;
unsigned long long int var_21 = 6686757928443037713ULL;
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
