#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1903869337U;
signed char var_3 = (signed char)-43;
unsigned long long int var_4 = 10683743395242369795ULL;
unsigned short var_6 = (unsigned short)54882;
unsigned char var_8 = (unsigned char)39;
unsigned char var_10 = (unsigned char)123;
int zero = 0;
unsigned int var_11 = 1425165056U;
unsigned int var_12 = 3529881180U;
unsigned long long int var_13 = 11294976380633415816ULL;
unsigned int var_14 = 3053118890U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
