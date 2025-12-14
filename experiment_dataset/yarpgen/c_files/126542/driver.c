#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43573;
signed char var_2 = (signed char)-97;
int var_6 = -1189405474;
long long int var_9 = -4234428319802658108LL;
unsigned long long int var_10 = 13525903429032772605ULL;
long long int var_12 = -8904357604321204900LL;
int zero = 0;
unsigned long long int var_17 = 3980369486899301158ULL;
int var_18 = 356129223;
unsigned short var_19 = (unsigned short)11109;
unsigned char var_20 = (unsigned char)217;
unsigned char var_21 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
