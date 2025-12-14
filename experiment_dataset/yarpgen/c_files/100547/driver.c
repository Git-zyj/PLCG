#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25420;
long long int var_1 = -2631992187725166344LL;
short var_2 = (short)5774;
unsigned long long int var_3 = 15617458505079881367ULL;
unsigned long long int var_5 = 15788090449110087333ULL;
long long int var_6 = 5226925048287791094LL;
int var_7 = -615020643;
short var_9 = (short)-6745;
signed char var_11 = (signed char)25;
int zero = 0;
short var_13 = (short)-2983;
signed char var_14 = (signed char)-90;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
