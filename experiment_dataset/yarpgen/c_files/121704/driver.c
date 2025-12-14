#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40193;
unsigned long long int var_1 = 14245370938369234366ULL;
unsigned short var_2 = (unsigned short)53231;
unsigned char var_5 = (unsigned char)132;
unsigned char var_11 = (unsigned char)41;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)129;
int zero = 0;
long long int var_17 = -6328556972267829836LL;
long long int var_18 = 7126169714562689193LL;
long long int var_19 = -5498103310129845882LL;
unsigned short var_20 = (unsigned short)64083;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
