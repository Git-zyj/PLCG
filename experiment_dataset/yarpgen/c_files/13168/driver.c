#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21906;
unsigned long long int var_2 = 16189689173154202269ULL;
unsigned long long int var_4 = 4835406444578947450ULL;
signed char var_10 = (signed char)-103;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -751096113652443527LL;
void init() {
}

void checksum() {
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
