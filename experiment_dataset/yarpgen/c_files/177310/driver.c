#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 478483556761400108LL;
unsigned long long int var_2 = 6691679899803968254ULL;
unsigned long long int var_3 = 17099071785127421577ULL;
unsigned short var_5 = (unsigned short)22640;
signed char var_11 = (signed char)-111;
long long int var_13 = 4692284989369517364LL;
int zero = 0;
unsigned short var_17 = (unsigned short)61243;
long long int var_18 = 8199817140019425187LL;
unsigned int var_19 = 4223049193U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
