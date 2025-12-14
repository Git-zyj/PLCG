#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23790;
long long int var_1 = 4977860407002407277LL;
long long int var_3 = -4116806671255559952LL;
long long int var_4 = -6286785471774754678LL;
long long int var_5 = 837324023720820213LL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-29363;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)5349;
int zero = 0;
int var_13 = 1320156057;
unsigned int var_14 = 2858497748U;
long long int var_15 = -1218396449592437258LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
