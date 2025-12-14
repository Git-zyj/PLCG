#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2122771798;
signed char var_3 = (signed char)-5;
unsigned int var_4 = 1487532149U;
unsigned long long int var_8 = 6203858630567558818ULL;
long long int var_9 = 6792007001314335883LL;
unsigned char var_10 = (unsigned char)95;
int zero = 0;
unsigned long long int var_12 = 17889592484492583534ULL;
int var_13 = 741798724;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
