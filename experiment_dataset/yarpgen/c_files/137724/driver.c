#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17075451890554823073ULL;
signed char var_1 = (signed char)126;
unsigned short var_2 = (unsigned short)48213;
unsigned char var_7 = (unsigned char)216;
unsigned long long int var_8 = 12914561530650801224ULL;
unsigned short var_11 = (unsigned short)9138;
int zero = 0;
unsigned long long int var_13 = 11869303273293164512ULL;
long long int var_14 = -6338517898260572411LL;
short var_15 = (short)-27732;
void init() {
}

void checksum() {
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
