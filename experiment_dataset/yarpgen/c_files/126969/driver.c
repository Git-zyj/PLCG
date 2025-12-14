#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
long long int var_1 = -7197374618673959745LL;
unsigned int var_2 = 2513610035U;
unsigned long long int var_3 = 3414903250074724320ULL;
int var_4 = -1830633275;
unsigned short var_5 = (unsigned short)28140;
short var_7 = (short)28717;
long long int var_9 = 3371754921768006908LL;
unsigned int var_11 = 1585279834U;
unsigned long long int var_15 = 16618650768216855278ULL;
unsigned int var_17 = 796220938U;
int zero = 0;
int var_20 = -1844900742;
short var_21 = (short)25184;
short var_22 = (short)6167;
unsigned int var_23 = 4075571038U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
