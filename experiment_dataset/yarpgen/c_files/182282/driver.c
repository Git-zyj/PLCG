#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3895620459599279915LL;
unsigned long long int var_1 = 12695461331120474422ULL;
unsigned long long int var_2 = 6163438020770656853ULL;
signed char var_4 = (signed char)-14;
signed char var_7 = (signed char)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_10 = -5221257227276227533LL;
signed char var_11 = (signed char)-4;
long long int var_12 = -619177165371294311LL;
short var_13 = (short)15626;
unsigned char var_14 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
