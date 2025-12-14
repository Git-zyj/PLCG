#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27439;
unsigned long long int var_1 = 16615397455436410112ULL;
unsigned char var_2 = (unsigned char)135;
signed char var_6 = (signed char)-127;
int var_7 = 1849905986;
int var_8 = -1327381363;
unsigned long long int var_9 = 759174480340435765ULL;
unsigned char var_11 = (unsigned char)17;
int zero = 0;
signed char var_12 = (signed char)46;
unsigned int var_13 = 1450291770U;
unsigned int var_14 = 1341920790U;
unsigned int var_15 = 3709285167U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
