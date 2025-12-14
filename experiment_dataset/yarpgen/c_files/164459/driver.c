#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54411;
int var_1 = -41842526;
signed char var_4 = (signed char)85;
unsigned long long int var_7 = 5518843902491274073ULL;
short var_9 = (short)-8262;
int zero = 0;
unsigned short var_11 = (unsigned short)2403;
unsigned long long int var_12 = 5342674485516124868ULL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
