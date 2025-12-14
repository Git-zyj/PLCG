#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3014527555U;
unsigned long long int var_2 = 12807231696471181238ULL;
unsigned char var_3 = (unsigned char)177;
unsigned short var_6 = (unsigned short)57316;
unsigned long long int var_7 = 2911749768795837170ULL;
unsigned int var_8 = 3363350943U;
unsigned long long int var_9 = 5702002297737312836ULL;
unsigned char var_11 = (unsigned char)47;
int zero = 0;
unsigned short var_12 = (unsigned short)64540;
unsigned short var_13 = (unsigned short)19628;
unsigned int var_14 = 3594736130U;
unsigned long long int var_15 = 14750022883096685512ULL;
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
