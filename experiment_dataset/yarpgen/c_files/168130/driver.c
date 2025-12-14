#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17373;
_Bool var_1 = (_Bool)0;
short var_2 = (short)11394;
int var_4 = 196075800;
signed char var_5 = (signed char)-19;
long long int var_6 = -7243605008158132056LL;
int var_8 = -1971169389;
unsigned long long int var_9 = 17998870038239163306ULL;
short var_10 = (short)-10000;
unsigned int var_11 = 2363291629U;
signed char var_14 = (signed char)-114;
long long int var_15 = -4655071086547347436LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)41;
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
