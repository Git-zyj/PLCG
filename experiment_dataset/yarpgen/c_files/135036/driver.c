#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7297140409537316849ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 16019153087066314160ULL;
int zero = 0;
short var_20 = (short)15391;
short var_21 = (short)-23458;
void init() {
}

void checksum() {
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
