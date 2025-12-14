#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1924603047U;
unsigned short var_3 = (unsigned short)8977;
int var_5 = 341739457;
unsigned int var_11 = 1317867883U;
int zero = 0;
long long int var_13 = 2868879067160265592LL;
unsigned short var_14 = (unsigned short)26839;
unsigned long long int var_15 = 8090563641195420159ULL;
unsigned char var_16 = (unsigned char)159;
_Bool var_17 = (_Bool)0;
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
