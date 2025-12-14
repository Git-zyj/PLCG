#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)34;
int var_2 = 1675053649;
long long int var_3 = -2349467785287498089LL;
unsigned long long int var_4 = 12343404398452300681ULL;
unsigned char var_7 = (unsigned char)29;
signed char var_9 = (signed char)-116;
unsigned long long int var_11 = 12715571885945108257ULL;
int var_14 = 236850666;
short var_15 = (short)23171;
short var_17 = (short)4879;
int zero = 0;
unsigned long long int var_18 = 4502130685588383329ULL;
unsigned long long int var_19 = 14398432450860857863ULL;
short var_20 = (short)25126;
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
