#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-7;
unsigned short var_7 = (unsigned short)35261;
long long int var_9 = 423523224137448582LL;
unsigned short var_10 = (unsigned short)54513;
unsigned long long int var_11 = 5561247974597815236ULL;
unsigned long long int var_12 = 10159512775802562037ULL;
signed char var_14 = (signed char)-30;
unsigned long long int var_16 = 16009722296017234437ULL;
unsigned short var_17 = (unsigned short)50143;
int zero = 0;
unsigned long long int var_18 = 11343287172148804310ULL;
long long int var_19 = 7908524988977356106LL;
short var_20 = (short)19238;
unsigned int var_21 = 3331507585U;
unsigned short var_22 = (unsigned short)56484;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
