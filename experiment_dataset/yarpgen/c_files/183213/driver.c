#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
unsigned long long int var_1 = 14565471185750100294ULL;
signed char var_3 = (signed char)-104;
long long int var_11 = 7640781326001768203LL;
unsigned long long int var_13 = 5831375361654707968ULL;
unsigned char var_15 = (unsigned char)206;
int zero = 0;
unsigned char var_18 = (unsigned char)191;
long long int var_19 = 8274576478788032331LL;
_Bool var_20 = (_Bool)1;
int var_21 = 117203711;
void init() {
}

void checksum() {
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
