#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1275250251;
unsigned short var_4 = (unsigned short)65368;
unsigned short var_15 = (unsigned short)41131;
int zero = 0;
unsigned char var_18 = (unsigned char)119;
short var_19 = (short)-10367;
int var_20 = 629117311;
int var_21 = -1474751404;
int var_22 = -1845062698;
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
