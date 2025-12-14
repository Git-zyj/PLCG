#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1351910560196743931LL;
int var_3 = -941223988;
short var_8 = (short)28697;
unsigned long long int var_9 = 15972659756410222994ULL;
short var_10 = (short)-869;
short var_11 = (short)-26524;
long long int var_17 = -7024586378026086608LL;
long long int var_18 = -3618157345116210782LL;
int zero = 0;
short var_19 = (short)3094;
unsigned short var_20 = (unsigned short)52557;
int var_21 = -1996207631;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
