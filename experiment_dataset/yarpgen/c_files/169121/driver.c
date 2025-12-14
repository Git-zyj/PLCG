#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17222252351155131061ULL;
int var_1 = 1217977138;
unsigned char var_3 = (unsigned char)113;
_Bool var_4 = (_Bool)0;
long long int var_11 = 4230497370606195115LL;
unsigned int var_15 = 1171770208U;
long long int var_16 = -7324180243691830021LL;
unsigned long long int var_18 = 13792675937657952457ULL;
int zero = 0;
unsigned long long int var_19 = 5312521858571735499ULL;
unsigned short var_20 = (unsigned short)15313;
unsigned long long int var_21 = 8223232667375593458ULL;
unsigned char var_22 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
