#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1073;
unsigned long long int var_5 = 790636591603330018ULL;
unsigned char var_9 = (unsigned char)147;
unsigned long long int var_12 = 8931502813143944963ULL;
long long int var_15 = -4589115698607852954LL;
int zero = 0;
signed char var_18 = (signed char)-77;
unsigned long long int var_19 = 17617704280935983270ULL;
long long int var_20 = 3357383752795528548LL;
void init() {
}

void checksum() {
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
